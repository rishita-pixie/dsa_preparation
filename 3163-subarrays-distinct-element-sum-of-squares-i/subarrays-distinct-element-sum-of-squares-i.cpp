class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
    
 for(int i=0;i<n;i++){
unordered_set<int>mp;
for(int j=i;j<n;j++){
    mp.insert(nums[j]);
    int curr=mp.size();
    ans+=curr*curr;
}

 }
 return ans;}
};