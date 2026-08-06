class Solution {
public:
int t[1002][101];
int solve(vector<int>& nums,int i,int end){
    if(i>end) return t[i][end]=0;
    if(t[i][end]!=-1) return t[i][end];
    int pick=nums[i]+solve(nums,i+2,end);
    int notpick=solve(nums,i+1,end); 
    return t[i][end]=max(pick,notpick);
}
    int rob(vector<int>& nums) {
int n=nums.size();
memset(t,-1,sizeof(t));
 if(n==1) return nums[0];
      int c1=solve(nums,0,n-2);
      int c2=solve(nums,1,n-1);
      return max(c1,c2);
    }
};