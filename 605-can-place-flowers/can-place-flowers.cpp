class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int s) {
      int n=nums.size();  
      for(int i=0;i<n;i++){
        if(s==0) return true;
        if(nums[i]==0){
        bool left=(i==0||nums[i-1]==0);
        bool right=(i==n-1||nums[i+1]==0);
        if(left&&right){
            nums[i]=1;
            s--;
        }
        if(s<=0) return true;
        }
      }
    return false;}
};