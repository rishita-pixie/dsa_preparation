class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
    int n=colors.size();
    int mini=INT_MAX;
    int ans=0;
    int cnti;
    int cntj;
    for(int i=1;i<n;i++){
        if(colors[i-1]==colors[i]){
    mini=min(neededTime[i],neededTime[i-1]); 
  ans+=mini;
  neededTime[i]=max(neededTime[i],neededTime[i-1]);}
    }
 return ans;
    }

};