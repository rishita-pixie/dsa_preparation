class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxi=sum;
        int i=0;
        int j=k-1;
        while(j<n-1){
            sum=sum-nums[i];
            i++;
            j++;
            sum=sum+nums[j];
            maxi=max(maxi,sum);
        }
        return (double)maxi/k;
    }
};