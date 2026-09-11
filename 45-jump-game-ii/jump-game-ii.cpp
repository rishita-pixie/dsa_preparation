class Solution {
public:

int dp[10002];
 int solve(vector<int>& nums,int i){
    int n=nums.size();
    int mini=1e9;
       if(i>=n-1) return 0;
    if(dp[i]!=-1)return dp[i];
    for(int j=1;j<=nums[i]&&i+j<n;j++){

int jump=1+solve(nums,i+j); 
mini=min(mini,jump);
    } 
    return dp[i]=mini;
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
      return  solve(nums,0);

       
        
    }
};