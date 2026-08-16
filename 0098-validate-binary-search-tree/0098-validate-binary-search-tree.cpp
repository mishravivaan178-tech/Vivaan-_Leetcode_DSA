/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return hel(root,LONG_MIN,LONG_MAX);
    }
    bool hel(TreeNode*root,long minv, long maxv){
        if(root==NULL){
            return true;
        }
        if(root->val >=maxv || root->val<=minv){
            return false;
        }
        return hel(root->left,minv,root->val) && hel(root->right,root->val,maxv);
    }
};