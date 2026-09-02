class Solution {
public:
void rev(int i,int j,vector<int>&nums){
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }

}
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       k=k%n;
       rev(0,n-1,nums);
       rev(0,k-1,nums);
       rev(k,n-1,nums); 
    }
};