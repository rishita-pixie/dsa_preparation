class Solution {
public:
vector<string>dp[10][10];
bool vis[10][10];
vector<string> solve(int open,int close,int n){
if(open==n&&close==n) return {""};
if(vis[open][close]) return dp[open][close];
vis[open][close]=true;
vector<string>ans;

if(open<n){
 vector<string> temp=solve(open+1,close,n);
 for(string s:temp) ans.push_back('('+s);

}
if(close<open){
 vector<string> temp=solve(open,close+1,n);
 for(string s:temp) ans.push_back(')'+s);

}

return dp[open][close]=ans;
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        memset(vis,false,sizeof(vis));
     return solve(0,0,n);
    
    }
};