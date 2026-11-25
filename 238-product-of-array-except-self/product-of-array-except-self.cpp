class Solution {
public://simple age se chalu kar and strt with 1 and same with 1 from last se front so done 
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int product=1;
        ans[0]=1;
      for(int i=1;i<n;i++)
{
ans[i]=ans[i-1]*nums[i-1];
}   
int left=1;
for(int i=n-1;i>=0;i--){
ans[i]=ans[i]*left;
left=nums[i]*left;
}    
        return ans;
    }
};