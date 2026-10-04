class Solution {
public:
    int totalFruit(vector<int>& s) {
        int n=s.size();
        int i=0;
        int j=0;
        int maxi=1;
        unordered_map<int,int>mp;
           while(j<n){
            mp[s[j]]++;
            if(mp.size()<=2){
                maxi=max(maxi,j-i+1);
            }
            else if(mp.size()>2){
                while(mp.size()>2) {
                    mp[s[i]]--;
                  
                    if(mp[s[i]]==0) mp.erase(s[i]);
                      i++;
                }
            }
            j++;
           }
           return maxi;
    }
};