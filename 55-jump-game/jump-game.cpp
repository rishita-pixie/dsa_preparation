class Solution {
public:
int t[10002];
bool solve(int i,vector<int>& arr){
    int n=arr.size();
    if(t[i]!=-1) return t[i];
    if(i==n-1) return t[i]=true;
    for(int j=1;j<=arr[i]&&i+j<n;j++){
        if(solve(i+j,arr)) return t[i]=true;
    }
    return t[i]=false;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(0,nums);
    }
};