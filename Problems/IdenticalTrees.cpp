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
bool areIdentical(TreeNode* t1, TreeNode* t2){
    if (t1 == nullptr && t2 == nullptr){
        return true;
    }
    if (t1 == nullptr || t2 == nullptr){
        return false;
    }
    if(t1->data != t2->data){
        return false;
    }
    return (areIdentical(t1->left, t2->left) &&
            areIdentical(t1->right, t2->right));

}
int main() {
    TreeNode* tree1 = new TreeNode(1);
    tree1->left = new TreeNode(2);
    tree1->right = new TreeNode(3);

    TreeNode* tree2 = new TreeNode(1);
    tree2->left = new TreeNode(2);
    tree2->right = new TreeNode(3);

    TreeNode* tree3 = new TreeNode(1);
    tree3->left = new TreeNode(4);
    tree3->right = new TreeNode(5);

    TreeNode* tree4 = new TreeNode(5);
    tree4->left = new TreeNode(2);
    tree4->right = new TreeNode(9);

    if (areIdentical(tree1, tree4)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    if (areIdentical(tree3, tree4)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    return 0;
}
