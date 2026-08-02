class Solution {
public:
int t[501][501];
int solve(string& s1,string& s2,int n,int m){
    if(n==0) return m;
    if(m==0) return n;
    if(t[n][m]!=-1) return t[n][m];
    if(s1[n-1]==s2[m-1]) return t[n][m]=solve(s1,s2,n-1,m-1);
    else {
        t[n][m]=1+min({solve(s1,s2,n-1,m),solve(s1,s2,n,m-1),solve(s1,s2,n-1,m-1)});
    }
    return t[n][m];
}
    int minDistance(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        memset(t,-1,sizeof(t));
        return solve(s1,s2,n,m);
    }
};