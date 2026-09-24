class Solution {
public:
int solve(int num){
     int ans=0;
    while(num>0){
   
    int n=num%10;
    ans=ans+n;
    num=num/10;}
    return ans;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(solve(num)==i) return i;
        }
        return ans;
    }
};