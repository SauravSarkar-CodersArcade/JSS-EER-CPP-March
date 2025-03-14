#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : data(value), left(nullptr), right(nullptr){}
};
void inOrderTraversal(TreeNode* root){ // LDR
    if (root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
TreeNode* insert(TreeNode* root, int key){
    if (root == nullptr){
        return new TreeNode(key); // Make the key the root & return it
    }
    if (key < root->data){
        root->left = insert(root->left, key);
    } else if (key > root->data){
        root->right = insert(root->right, key);
    }
    return root;
}
TreeNode* search(TreeNode* root, int key){
    if (root == nullptr || root->data == key){
        return root;
    }
    if (root->data < key){
        return search(root->right, key);
    }
    return search(root->left, key);
}
TreeNode* findMin(TreeNode* root){
    TreeNode* curr = root;
    while (curr && curr->left != nullptr){
        curr = curr->left;
    }
    return curr;
}
TreeNode* deleteNode(TreeNode* root, int key){
    if (root == nullptr){
        return root;
    }
    else if (key > root->data){
        root->right = deleteNode(root->right, key);
    } else if (key < root->data){
        root->left = deleteNode(root->left, key);
    }else{
        // Only one child
        if (root->left == nullptr){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if(root->right == nullptr){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children
        // Find the in-order successor of that node to replace the node
        TreeNode* temp = findMin(root->right);
        root->data = temp->data;
        // Duplicate element/node needs to be deleted
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root,90);
    insert(root,80);
    cout << "InOrderTraversal: ";
    inOrderTraversal(root);
    cout << endl;
    cout << "Delete:50\n";
    root = deleteNode(root,50);
    cout << "InOrderTraversal: ";
    inOrderTraversal(root);
    cout << endl;
    int key = 700;
    TreeNode* result = search(root,key);
    if (result == nullptr){
        cout << "Key " << key << " not found in the BST." << endl;
    } else{
        cout << "Key " << key << " found in the BST." << endl;
    }
    return 0;
}
