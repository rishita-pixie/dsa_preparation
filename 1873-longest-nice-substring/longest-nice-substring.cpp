class Solution {
public:
string solve(string s){
unordered_set<char>mp;
for(char c:s) mp.insert(c);
for(int i=0;i<s.size();i++){
    char ch=s[i];
    
if(mp.count(tolower(ch))==0||mp.count(toupper(ch))==0){
    string left=solve(s.substr(0,i));
    string right=solve(s.substr(i+1));
    if(left.size()>=right.size()) return left;
    else return right;
}
}
return s;
}
    string longestNiceSubstring(string s) {
     return solve(s);
    }
};