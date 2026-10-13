class Solution {
public:
int solve(string s,int k){
    string left,right;
    if(s.size()<k) return 0;
    unordered_map<char,int>mp;
    for(auto it:s) mp[it]++;
    for(auto it:mp){
        if(it.second<k){
          int pos=s.find(it.first);
           left=s.substr(0,pos);
           right=s.substr(pos+1);
           return max(solve(left,k),solve(right,k));
        }
    }
return s.size();
}
    int longestSubstring(string s, int k) {
      return solve(s,k);
    }
};