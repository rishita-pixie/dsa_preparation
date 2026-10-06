class Solution {
public:
    string minWindow(string s, string t) {
       int n=s.size();
       int i=0;
       int j=0;
       int strt=0;
       int len=INT_MAX;
       int count=0;
       if(t.empty()) return "";
       vector<int> mp(128, 0), list(128, 0);
       string ans="";
       for(char ch:t) list[ch]++;
       while(j<n){
        mp[s[j]]++;
        if(mp[s[j]]<=list[s[j]]) count++;
        if(count==t.size()){
            while(count==t.size()){
                if(j-i+1<len){
                    strt=i;
                    len=j-i+1;
                   
                }
                if(mp[s[i]]<=list[s[i]]) count--;
                mp[s[i]]--;
                i++;
            }
        }
       j++;} 
       if(len==INT_MAX) return "";
    return s.substr(strt,len);}
};