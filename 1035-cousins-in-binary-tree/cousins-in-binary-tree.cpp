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
TreeNode* parent(TreeNode* root,int x){
    if(root==nullptr) return nullptr;
    if((root->left&&root->left->val==x)||(root->right&&root->right->val==x)) return root;
    TreeNode* left=parent(root->left,x);
    if(left!=nullptr) return left;
    return parent(root->right,x);
}

int depth(TreeNode* root,int r,int d){
    if(root==nullptr) return -1;
    if(root->val==d) return r;
    int left= depth(root->left,r+1,d);
    if(left!=-1) return left;
     return depth(root->right,r+1,d);
}
bool solve(TreeNode* root, int x, int y){
    if(root==nullptr) return false;
   int dx=depth(root,0,x);
   int dy=depth(root,0,y);

if(dx!=dy) return false;
if(parent(root,x)!=parent(root,y)&&(dx==dy)) return true;
return false;

}
    bool isCousins(TreeNode* root, int x, int y) {
     return solve(root,x,y);   
    }
};