class Solution {
public:
    int maxDepth(string s) {
       int count=0;
       int i=0;
       int maxi=0;
      while(i<s.size()){
        if(s[i]=='('&&i<s.size()){
            count++;
            maxi=max(maxi,count);
            i++;
        }
        else if(s[i]==')'){
            count--;
            i++;
        }
        else i++;
       }

    return maxi;}
};