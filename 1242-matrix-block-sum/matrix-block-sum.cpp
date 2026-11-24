class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>prefix(n+1,vector<int>(m+1,0));
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        prefix[i][j]+=mat[i-1][j-1]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    }
}
vector<vector<int>>ans(n,vector<int>(m,0));
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    int r1=max(i-k,0)+1;
    int r2=min(i+k,n-1)+1;
int c1=max(j-k,0)+1;
int c2=min(j+k,m-1)+1;

ans[i][j]=prefix[r2][c2]-prefix[r1-1][c2]-prefix[r2][c1-1]+prefix[r1-1][c1-1];

}
}
return ans;

    }
};