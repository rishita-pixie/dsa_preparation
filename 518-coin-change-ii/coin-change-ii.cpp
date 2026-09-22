class Solution {
public:
int t[5001][301];

int solve(int a,vector<int>&arr,int i){
    int n=arr.size();
    if(a==0) return 1;
    if(i==n) return 0;
    if(t[a][i]!=-1) return t[a][i];
    int pick=0;
    if(arr[i]<=a) pick=solve(a-arr[i],arr,i);
    int notp=solve(a,arr,i+1);
    return t[a][i]=pick+notp;
}
    int change(int a, vector<int>& arr) {
        memset(t,-1,sizeof(t));
        return solve(a,arr,0);
    }
};