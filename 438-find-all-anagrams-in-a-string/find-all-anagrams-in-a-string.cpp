class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int i=0;
        int j=0;
        int n=s.size();
        int m=p.size();
       
        unordered_map<char,int>mp;
        unordered_map<char,int> anagrams;
for(auto it:p) mp[it]++;

        while(j<s.size()){
             bool match=true;
            anagrams[s[j]]++;
           if(j-i+1==m){
             for(auto it:anagrams){
                if(mp[it.first]!=it.second) {
                    match=false;
                    break;
                }
             }
                  anagrams[s[i]]--;
                    i++;
             if(match==true) ans.push_back(i-1);

             
           }
        j++;}
    return ans;}
};