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
    bool isCousins(TreeNode* root, int x, int y) {
        //method 1= 2 functions banao depth() and parent() and then check
        //methd 2 =bfs approach level sam hunge to depth fun nhi banana prega 
        queue<TreeNode*>q;
      q.push(root);
        while(!q.empty()){
  int n=q.size();
  bool foundx=false;
  bool foundy=false;
  for(int i=0;i<n;i++){
       TreeNode* node=q.front();
  q.pop();
     
     if(node->left&&node->right){
        if((node->left->val==x&&node->right->val==y)||(node->right->val==x&&node->left->val==y)){
            return false;
        }
        }
        if(node->val==x) foundx=true;
        if(node->val==y) foundy=true;
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
     
     }

      
if(foundx&&foundy) return true;
if(foundx||foundy) return false;
        }
        
        return false;
    }
};