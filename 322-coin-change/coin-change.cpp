class Solution {
public:
int t[10004][13];
int solve(vector<int>&arr,int a,int i){
     int n=arr.size();
if(a==0) return 0;
if(i==n) return 1e9;
if(t[a][i]!=-1) return t[a][i];

int pick=1e9;
if(arr[i]<=a) pick=1+solve(arr,a-arr[i],i);
int notpick=solve(arr,a,i+1);
return t[a][i]=min(pick,notpick);

}
    int coinChange(vector<int>&arr , int a) {
        int n=arr.size();
        memset(t,-1,sizeof(t));
        int ans=solve(arr,a,0);
    
    if(ans==1e9) return -1;
    return ans;}
};