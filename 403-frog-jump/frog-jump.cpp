class Solution {
public:
int t[2001][2001];
bool solve(vector<int>& stones,int i,int jump){
    if(t[i][jump]!=-1) return t[i][jump];
    if(i==stones.size()-1) return t[i][jump]=true;
    for(int id=i+1;id<stones.size();id++){
       int diff=stones[id]-stones[i];
if(diff==jump||diff==jump-1||diff==jump+1) {
    if(solve(stones,id,diff)) return t[i][jump]=true;
}
    }
    return t[i][jump]=false;  
}
    bool canCross(vector<int>& stones) {
        memset(t,-1,sizeof(t));
if(stones[1]!=1) return false;
        return solve(stones,0,0);

    }
};