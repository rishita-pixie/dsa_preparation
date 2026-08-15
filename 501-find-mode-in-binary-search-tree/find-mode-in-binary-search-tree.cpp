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
vector<int>solve(TreeNode* root){
    vector<int>ans;
     if(root==nullptr) return ans;
 ans.push_back(root->val);

 vector<int>left=solve(root->left);
 vector<int>right=solve(root->right);
 for(int x:left) ans.push_back(x);
 for(int y:right) ans.push_back(y);
 return ans;
}
    vector<int> findMode(TreeNode* root) {
    vector<int> arr=solve(root);
unordered_map<int,int>mp;
int maxi=0;
for(int x:arr){
    mp[x]++;
    maxi=max(maxi,mp[x]);

    }
    vector<int>ans;
    for(auto i:mp){
        if(i.second==maxi) ans.push_back(i.first);
    }
    return ans;}
};