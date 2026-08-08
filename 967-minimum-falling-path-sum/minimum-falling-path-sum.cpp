class Solution {
public:
int t[101][101];
bool vis[101][101];
int solve(vector<vector<int>>& arr,int i,int j){
    int n=arr.size();
    if(j<0||j>=n) return INT_MAX;
    if(i==n-1) return arr[i][j];
    if(vis[i][j]) return t[i][j];
   vis[i][j]=true;
   int p1=solve(arr,i+1,j-1);
   int p2=solve(arr,i+1,j);
   int p3=solve(arr,i+1,j+1);

   return t[i][j]=arr[i][j]+min({p1,p2,p3});
   
}
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int ans=INT_MAX;
     memset(vis,false,sizeof(vis));
        for(int j=0;j<n;j++){
            ans=min(ans,solve(arr,0,j));
        }

        return ans;

    }
};