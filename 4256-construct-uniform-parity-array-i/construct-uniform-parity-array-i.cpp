class Solution {
public:
bool check(int i,vector<int>& nums){
    int n=nums.size();
  if(i==n) return true;
  if(nums[i]%2!=0) return false;
  return check(i+1,nums);
     
}
    bool uniformArray(vector<int>& nums) {
      int n=nums.size();
      vector<int>arr;
      for(int i=0;i<n;i++){
        if(nums[i]%2==0) check(i+1,nums);
      }
      return true;
    }
};