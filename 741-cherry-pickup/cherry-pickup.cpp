class Solution {
public:
int t[50][50][50];
int ans;
int solve(vector<vector<int>>& arr,int r1,int r2,int c1){
    int n=arr.size();
    
    int c2=r1+c1-r2;
 if(r1<0||r2<0||c1<0||c2<0||r1>=n||r2>=n||c1>=n||c2>=n) return -1e9;
 if(arr[r1][c1]==-1||arr[r2][c2]==-1) return -1e9;
if(r1==n-1&&c1==n-1) return arr[r1][c1]; 
if(t[r1][r2][c1]!=-1) return t[r1][r2][c1];
int curr=arr[r1][c1];
if(r1!=r2||c1!=c2) curr+=arr[r2][c2];
int one=solve(arr,r1+1,r2+1,c1);
int two=solve(arr,r1,r2,c1+1);
int three=solve(arr,r1,r2+1,c1+1);
int four=solve(arr,r1+1,r2,c1);
   ans=curr+max({one,two,three,four});
   return t[r1][r2][c1]=ans;
}
    int cherryPickup(vector<vector<int>>& arr) {
        int n=arr.size();
         if(arr[0][0]==-1) return 0;
memset(t,-1,sizeof(t));
 ans=solve(arr,0,0,0);
 return max(0,ans);

    }
};