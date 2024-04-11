void inorderTree(TreeNode *node1, TreeNode *node2, bool &same){
    if (!node1 && !node2) {
        return;
    }
    if (!node1 && node2 || node1 && !node2){
        same = false;
        return;
    }
    if (node1->val != node2->val){
        same = false;
        return;
    }
    inorderTree(node1->left, node2->left, same);
    inorderTree(node1->right, node2->right, same);
 }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool same = true;
        inorderTree(p, q, same);
        return same;
    }
};