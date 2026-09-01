class Solution {
public:
struct S{
    int r;
    int c;
    int moves;
    int energy;
   int collect;
};
    int minMoves(vector<string>& arr, int eg) {
        int n=arr.size();
        int m=arr[0].size();
        int sr,sc;
        vector<pair<int,int>> liter;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='S') {
                    sr=i;
                    sc=j;
                }
                if(arr[i][j]=='L') liter.push_back({i,j});
            }
        }
        int total=liter.size();
        int all = (1 << total)-1;
         queue<S> q;
        vector<vector<vector<vector<bool>>>>visited(n,vector<vector<vector<bool>>>(m,vector<vector<bool>>(eg+1,vector<bool>(1<<total,false))));
          q.push({
            sr,sc,0,eg,0
          });
          visited[sr][sc][eg][0] = true;
          while(!q.empty()){
            S cur=q.front();
            q.pop();
int r=cur.r;
int c=cur.c;
int move=cur.moves;
int eng=cur.energy;
int masks=cur.collect;
if(masks==all)return move;
int nr[]={-1,0,1,0};
int nc[]={0,1,0,-1};
for(int k=0;k<4;k++){
int rr=nr[k]+r;
int cc=nc[k]+c;

if(rr<0||rr>=n||cc<0||cc>=m) continue;
if(arr[rr][cc]=='X') continue;
int ne=eng-1;
if(ne<0) continue;
if(arr[rr][cc]=='R') ne=eg;

int mask=masks;
if(arr[rr][cc]=='L'){
    for(int i=0;i<total;i++){
        if(liter[i].first==rr&&liter[i].second==cc) {
            mask=mask|(1<<i);
   break;} }
}
if(visited[rr][cc][ne][mask]==true) continue;
visited[rr][cc][ne][mask]=true;

q.push({rr,cc,move+1,ne,mask});
          }
          }
          return -1;
    }
};