class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int num) {
       sort(box.begin(),box.end(),[](vector<int>& a, vector<int>& b){
        return a[1]>b[1];
       });
       int ans=0;
       int n=box.size();
       for(int i=0;i<n;i++){
         int take=min(box[i][0],num);
         ans+=take*box[i][1];
         num-=take;
         if(take==0) break;
       }  
    return ans;}
};