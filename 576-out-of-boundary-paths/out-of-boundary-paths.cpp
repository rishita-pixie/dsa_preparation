class Solution {
public:
int t[51][51][51];
int solve(int m,int n,int maxi,int sr,int sc){
    if(m==0||n==0) return 0;
    if(sr<0||sc>=n||sr>=m||sc<0) return 1;
    if(maxi==0) return 0;
    if(t[maxi][sr][sc]!=-1) return t[maxi][sr][sc];
    int r[]={-1,0,1,0};
    int c[]={0,1,0,-1};
    int ans=0;
    int mod=1e9+7;
    for(int i=0;i<4;i++){
        int nr=sr+r[i];
        int nc=sc+c[i];
   ans=(ans+solve(m,n,maxi-1,nr,nc))%mod;}
   return t[maxi][sr][sc]=ans;
}

    int findPaths(int m, int n, int maxi, int sr, int sc) {
       int mod=1e9+7;
       memset(t,-1,sizeof(t));
       int ans=solve(m,n,maxi,sr,sc);
          return ans%mod;
    }
};