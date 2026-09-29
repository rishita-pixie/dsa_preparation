class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
unordered_map<int,int>mp;
for(int i:nums){
    mp[i]++;
}
int ans=0;
for(auto it:mp){
    int one=it.first;

   if(mp.find(one+1)!=mp.end()){
    ans=max(ans,mp[one]+mp[one+1]);
   }
  

}
 return ans;}

    
};