void treePath(TreeNode *node, int result, int targetSum, bool& flag) {
    if (!node) return;
    result += node->val;
    if (!node->left && !node->right && result == targetSum) {
        flag = true;
        return;
    }
    treePath(node->left, result, targetSum, flag);
    treePath(node->right, result, targetSum, flag);
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool flag = false;
        treePath(root, 0, targetSum, flag);
        return flag;
    }
};