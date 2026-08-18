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
int mini=INT_MAX;
int sm=INT_MAX;
bool found=false;
void solve(TreeNode* root){
if(root==nullptr) return ;
if(root->val<mini) {
    sm=mini;
    mini=root->val;
}
else if(root->val>mini&&(!found||root->val<sm)){
 sm=root->val;
found=true;}
solve(root->left);
solve(root->right);

}
    int findSecondMinimumValue(TreeNode* root) {
     solve(root);
     if(!found) return -1;
     return sm;
    }
};