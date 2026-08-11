class Solution {
public:
int t[101][101][101];
int solve(vector<vector<int>>& arr,int i,int j,int k){
    int n=arr.size();
    int m=arr[0].size();
    if(j<0||j>=m||k<0||k>=m) return -1e9;
    if(t[i][j][k]!=-1) return t[i][j][k];
    if(i==n-1){
        if(j==k) return arr[i][k];
        return arr[i][j]+arr[i][k];
    }
    int curr=arr[i][j];
    if(j!=k) curr+=arr[i][k];
int o=curr+solve(arr,i+1,j-1,k+1);
int tw=curr+solve(arr,i+1,j,k);
int th=curr+solve(arr,i+1,j+1,k-1);
int f=curr+solve(arr,i+1,j-1,k);
int fv=curr+solve(arr,i+1,j,k-1);
int six=curr+solve(arr,i+1,j+1,k+1);
int s=curr+solve(arr,i+1,j-1,k-1);
int e=curr+solve(arr,i+1,j,k+1);
int ni=curr+solve(arr,i+1,j+1,k);
    
    return t[i][j][k]=max({o,tw,th,f,fv,six,s,e,ni});
}

    int cherryPickup(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        memset(t,-1,sizeof(t));
        return solve(arr,0,0,m-1);

    }
};