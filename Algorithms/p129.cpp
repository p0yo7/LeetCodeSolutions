class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return paths(root, 0);
    }
    int paths(TreeNode *node, int sum){
        if (!node) return 0;
        
        sum *= 10;
        sum += node->val;
                
        if (!node->left && !node->right) return sum;

        return paths(node->left, sum) + paths(node->right, sum);
    }
};