//https://leetcode.com/problems/symmetric-tree/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool helper(TreeNode* x, TreeNode* y){
        if(!x && !y) return true;
        if((!x && y) || (x && !y)) return false;
        if(x->val != y->val) return false;
        return helper(x->left, y->right) && helper(x->right, y->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return helper(root->left,root->right);
    }
};
