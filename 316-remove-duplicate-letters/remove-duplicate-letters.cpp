class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        vector<int>last(26);
        vector<bool>check(26,false);
        string ans="";
        for(int i=0;i<n;i++){
          last[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(check[ch-'a']) continue;
            while(!ans.empty()&&ans.back()>ch&&last[ans.back()-'a']>i){
                check[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(ch);
            check[ch-'a']=true; 
        }
    return ans;}
}; 