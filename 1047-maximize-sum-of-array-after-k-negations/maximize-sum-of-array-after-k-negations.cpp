
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for (int i=0;i<n;i++) {
            if (nums[i]<0&&k>0) {
                nums[i]=-nums[i];
                k--;
            }
        }
        sort(nums.begin(), nums.end());
        if (k%2==1){
            nums[0]=-nums[0];
        }

        int ans =0;

        for (int i=0;i<n;i++) {
            ans+=nums[i];
        }

        return ans;
    }
};
