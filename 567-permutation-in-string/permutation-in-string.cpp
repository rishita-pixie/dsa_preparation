class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n=s1.size();
         int m=s2.size();
         int i=0;
         int j=0;
         string curr;
         unordered_map<char,int>mp;
         unordered_map<char,int>current;
         for(auto it:s1) mp[it]++;
         while(j<s2.size()){
          current[s2[j]]++;
          if(j-i+1==n){
            for(auto it:current){
                if(mp==current) return true;
            }
            current[s2[i]]--;
            if(current[s2[i]]==0)   current.erase(s2[i]);
          
            i++;
          }
          
          j++;
         }
         return false;
    }
};