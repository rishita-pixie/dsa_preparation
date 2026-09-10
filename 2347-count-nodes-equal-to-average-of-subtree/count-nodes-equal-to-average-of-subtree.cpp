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
int ans=0;
pair<int,int> solve(TreeNode* root){
if(root==nullptr) return{0,0};
pair<int,int> left=solve(root->left);
pair<int,int> rg=solve(root->right);
int sum=left.first+rg.first+root->val;
int node=1+left.second+rg.second;
if(sum/node==root->val) ans++;
return {sum,node};
}
    int averageOfSubtree(TreeNode* root) {
    solve(root);
    return ans;}
};