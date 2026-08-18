/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* solve(TreeNode* o, TreeNode* c, TreeNode* t){
    if(o==nullptr||c==nullptr||t==nullptr) return nullptr;
       if(o==t) return c;
       TreeNode* left=solve(o->left,c->left,t);
        if(left!=nullptr) return left;//pehle left mai dhundo isko fir 
        return solve(o->right,c->right,t);
}
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        return solve(o,c,t);
    }
};