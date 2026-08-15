class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,sum=0;
        for(int i=0;i<n;i++){
            cnt^=nums[i];
            if(nums[i]!=0) sum=1;
        }
        if(sum==0) return 0;
        return (cnt!=0) ? nums.size():nums.size()-1;
    }
};