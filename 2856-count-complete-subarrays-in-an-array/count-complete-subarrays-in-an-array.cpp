class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        unordered_map<int,int>current;
        for(auto it:nums) mp[it]++;
        int m=mp.size();
        int i=0;
        int j=0;
        int ans=0;
        while(j<n){
current[nums[j]]++;
while(current.size()==m){
    ans+=n-j;
    current[nums[i]]--;
    if(current[nums[i]]==0){
        current.erase(nums[i]);
               
    }
     i++;
    }
    j++;
}
        return ans;
    }
};