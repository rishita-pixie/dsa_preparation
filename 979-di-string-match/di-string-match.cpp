class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int>ans;
        int curr=n;
        int strt=0;
        for(int i=0;i<=n;i++){
            if(s[i]=='I'){ ans.push_back(strt);
                strt++;}
            else {
                ans.push_back(curr);
                curr--;
        }
    }
    return ans;}

};