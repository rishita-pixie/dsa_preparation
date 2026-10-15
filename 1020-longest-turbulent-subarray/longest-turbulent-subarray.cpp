class Solution {
public:
    int maxTurbulenceSize(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        int ans = 1;
        int curr = 1;
        while (j < n) {
            if (nums[j] > nums[j - 1]) {
                if (j == 1 || nums[j - 1] <= nums[j - 2]) {
                    curr = j - i + 1;
                } else {
                    i = j - 1;
                    curr = 2;
                }
            } else if (nums[j] < nums[j - 1]) {
                if (j == 1 || nums[j - 1] >= nums[j - 2]) {
                    curr = j - i + 1;
                } else {
                    i = j - 1;
                    curr = 2;
                }
            } else {
                i = j;
                curr = 1;
            }

            ans = max(ans, curr);
            j++;
        }
        return ans;
    }
};