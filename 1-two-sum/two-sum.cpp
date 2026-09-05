class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
             int res=t-nums[i];
             if(mp.find(res)!=mp.end()) return {mp[res],i};
        
        mp[nums[i]]=i;}
        return {};
    }
};