class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if (!root){
            return false;
        }
        if (root->val == 0 || root->val == 1){
            return root->val;
        }
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        
        if (root->val == 2){
            return left || right;
        }
        else if (root->val == 3){
            return left && right;
        }
        return false;
    }
};