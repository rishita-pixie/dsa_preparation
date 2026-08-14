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
    if(root==nullptr) return 0;
    int ans=0;
    int left=solve(root->left);
    int rg=solve(root->right);
    if(root->left==nullptr){
        ans=rg+1;
    }
    else if(root->right==nullptr) ans=left+1;
else ans=min(left,rg)+1;
    return ans;
}
    int minDepth(TreeNode* root) {
        return solve(root);
    }
};