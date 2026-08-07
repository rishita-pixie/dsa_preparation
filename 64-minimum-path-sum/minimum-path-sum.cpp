class Solution {
public:
int t[201][201];
int solve(vector<vector<int>>& arr,int i,int j){
    int n=arr.size();
    int m=arr[0].size();
    if(i==n-1&&j==m-1) return arr[i][j];
    if(i>=n||j>=m) return INT_MAX;
    if(t[i][j]!=-1) return t[i][j];
    
    return t[i][j]=arr[i][j]+min(solve(arr,i+1,j),solve(arr,i,j+1));
}
    int minPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        memset(t,-1,sizeof(t));
        return solve(arr,0,0);
    }
};