class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int i=0;
        int j=0;
        int ans=0;
        while(j<n){
           if(nums[j]>threshold){
            j++;
            i=j;
            continue;
           }
           if(j==i&&nums[j]%2!=0){
             j++;
            i=j;
            continue;
           }
           if(j>i&&nums[j]%2==nums[j-1]%2) {
         if(nums[j]%2==0) i=j;
                else i=j+1;
           }
           ans=max(ans,j-i+1);
           j++;}
        return ans;
    }
};