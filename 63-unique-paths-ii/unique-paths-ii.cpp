class Solution {
public:
int t[101][101];

int solve(vector<vector<int>>& arr,int i,int j){
int n=arr.size();
int m=arr[0].size();
if(i>=n||j>=m) return 0;
if(arr[i][j]==1) return 0;
if(i==n-1&&j==m-1) return 1;
if(t[i][j]!=-1) return t[i][j];
 return t[i][j]=solve(arr,i+1,j)+solve(arr,i,j+1);

}
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        memset(t,-1,sizeof(t));
        return solve(arr,0,0);
    }
};