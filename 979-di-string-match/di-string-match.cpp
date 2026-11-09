class Solution {
public:
    vector<int> diStringMatch(string s) {
      int n=s.size();
      vector<int>ans(n+1);
      int i=0;int j=n;
      for(int k=0;k<n;k++){
        if(s[k]=='I'){
            ans[k]=i++;
        }
        else ans[k]=j--;
      }
      ans[n]=i;  
    return ans;}
};