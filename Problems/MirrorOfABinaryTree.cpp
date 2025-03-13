#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d){
        data = d;
        left = right = nullptr;
    }
};
void inOrderTraversal(TreeNode* root){ // LDR
    if (root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
TreeNode* mirrorTree(TreeNode* root){
    if (root == nullptr){
        return root;
    }
    // Temporary Node
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    if (root->left){
        mirrorTree(root->left);
    }
    if (root->right){
        mirrorTree(root->right);
    }
    return root;
}
int main() {
    // Level 0
    TreeNode* root = new TreeNode(1);
    // Level 1
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // Level 2
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    // Level 3
    root->left->right->left = new TreeNode(9);
    root->right->right->left = new TreeNode(15);

    cout << "InOrder of the original tree: ";
    inOrderTraversal(root);
    cout << endl;

    mirrorTree(root);

    cout << "InOrder of the mirror tree: ";
    inOrderTraversal(root);
    cout << endl;
    return 0;
}
