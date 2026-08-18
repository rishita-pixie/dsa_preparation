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
int solve(TreeNode* root,string s){
    if(root==nullptr) return 0;
    int sum=0;

    s+=to_string(root->val);
    
    if(root->left==nullptr&&root->right==nullptr) return stoi(s,0,2);
    return solve(root->left,s)+solve(root->right,s);
    
}
    int sumRootToLeaf(TreeNode* root) {

        return solve(root,"");
    }
};