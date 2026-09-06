class Solution {
public:
int tt[1001][1001];
int solve(string &s,string &t,int i,int j){
    if(j==t.size()) return 1;
    if(i==s.size()) return 0;
    if(tt[i][j]!=-1) return tt[i][j];
    if(s[i]==t[j]){
        int pick=solve(s,t,i+1,j+1);
        int notp=solve(s,t,i+1,j);
       
return tt[i][j]=pick+notp;
    }
    return tt[i][j]=solve(s,t,i+1,j);
}
    int numDistinct(string s, string t) {
        int n=s.size();
        memset(tt,-1,sizeof(tt));
        return solve(s,t,0,0);
    }
};