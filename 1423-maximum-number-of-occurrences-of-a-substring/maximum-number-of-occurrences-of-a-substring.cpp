class Solution {
public:
    int maxFreq(string s, int maxLetter, int mini, int maxi) {
        int n=s.size();
         int i=0;
         int j=0;
         int ans=0;
         int curr=0;
         unordered_map<string,int>valid;
         unordered_map<char,int>mp;
         while(j<n){
            mp[s[j]]++;
         while(j-i+1 > mini ||mp.size()>maxLetter){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
               }
            if(j-i+1==mini&&mp.size()<=maxLetter) {
                string temp=s.substr(i,mini);
               valid[temp]++; 
            
       ans=max(ans,valid[temp]);}
         j++;}
    return ans;}
};