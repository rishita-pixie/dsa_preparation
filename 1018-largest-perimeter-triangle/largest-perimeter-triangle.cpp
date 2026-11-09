class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int ans;
        int maxi=0;
     sort(nums.begin(),nums.end(),greater<int>());
     for(int i=0;i<n-2;i++){
int sum=nums[i+1]+nums[i+2];
if(sum>nums[i]) return sum+nums[i]; 
     }   
    return 0;}
};