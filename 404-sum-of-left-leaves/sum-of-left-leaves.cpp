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
int solve(TreeNode* root){
    int ans=0;
    if(root==nullptr) return 0;
    if(root->left!=nullptr&&root->left->right==nullptr&&root->left->left==nullptr){
        ans+=root->left->val;
    }
    ans+=solve(root->left);
    ans+=solve(root->right);
  return ans;
}
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root);
    }
};