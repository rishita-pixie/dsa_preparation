class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        bool odd=false;
        for(auto it:s) mp[it]++;
        for(auto it:mp){
            if(it.second%2==0) {
                ans+=it.second;
            }
            else {
                ans+=it.second-1;
                odd=true;
        }
        }
        if(odd) ans++;
        return ans;
    }
};