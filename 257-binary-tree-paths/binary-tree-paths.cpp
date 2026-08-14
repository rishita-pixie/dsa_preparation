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
 vector<string> solve(TreeNode* root){
    vector<string>ans;
if(root==nullptr) return ans;
if(root->left==nullptr&&root->right==nullptr){
    ans.push_back(to_string(root->val));
    return ans;
}
vector<string>left=solve(root->left);
for(string s:left) ans.push_back(to_string(root->val)+"->"+s);
vector<string>rg=solve(root->right);
for(string s:rg) ans.push_back(to_string(root->val)+"->"+s);
return ans;
 } 
    vector<string> binaryTreePaths(TreeNode* root) {
        return solve(root);
    }
};