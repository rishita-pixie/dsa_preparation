class Solution {
public:
    int maxProfit(vector<int>& s) {
        int n=s.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int diff=0;
        for(int i=0;i<n;i++){
            mini=min(mini,s[i]);
           
             diff=max(diff,s[i]-mini);
        }
        
        return diff;
    }
};