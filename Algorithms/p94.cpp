void printInorder(TreeNode *node, vector<int> &result){
    if (node == NULL){
        return;
    }
    printInorder(node->left, result);
    result.push_back(node->val);
    printInorder(node->right, result);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        printInorder(root, result);
        return result;
    }
};