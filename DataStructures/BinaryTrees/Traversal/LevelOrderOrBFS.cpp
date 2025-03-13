#include <iostream>
#include <queue>
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
void levelOrderTraversal(TreeNode* root){
    if (root == nullptr){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != nullptr){
            q.push(temp->left);
        }
        if (temp->right != nullptr){
            q.push(temp->right);
        }
    }
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


    cout << "LevelOrder: ";
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}
