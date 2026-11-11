class Solution {
public:
    int minCostToMoveChips(vector<int>& nums) {
       int n=nums.size();
int ans;
int even=0;
int odd=0;
for(int i=0;i<n;i++){
    if(nums[i]%2==0) even++;
    else odd++;
}
return min(even,odd);
    }
};