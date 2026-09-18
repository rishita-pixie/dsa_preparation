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
unordered_map<TreeNode*,int>t;
int solve(TreeNode* root){
    if(t.find(root)!=t.end()) return t[root];
    if(root==nullptr) return 0;
 int pick=root->val;
 if(root->left){
pick+=solve(root->left->left)+solve(root->left->right);
 }
 if(root->right){
pick+=solve(root->right->left)+solve(root->right->right);
 }
 int notpick=solve(root->right)+solve(root->left);
 return t[root]=max(pick,notpick);
}
    int rob(TreeNode* root) {
       return solve(root); 
    }
};