class Solution {
public:
bool pos(vector<int>&nums,int k,int j){
    int cnt=0;
    int i=0;
    while(i<nums.size()){
        if(nums[i]<=j) {
            cnt++;
            i+=2;
        }
        else i++;
    }
    if(cnt>=k) return true;
    return false;
}
    int minCapability(vector<int>& nums, int k) {
        int low=*min_element(nums.begin(),nums.end());
int high=*max_element(nums.begin(),nums.end());
while(low<high){
    int mid=low+(high-low)/2;
    if(pos(nums,k,mid)) high=mid;
    else low=mid+1;
}
return low;
    }
};