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
    vector<int>num;
    vector<int>num2;
     vector<TreeNode*> nodes;
    int n;
    private:
    void inorder(TreeNode*root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        num.push_back(root->val);
        num2.push_back(root->val);
        nodes.push_back(root);
        inorder(root->right);
        n=num.size();
    }
public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            if(num[i]!=num2[i]){
                nodes[i]->val=num[i];
            }
        }

    }
};