class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        set<string> repeated;
        unordered_set<string> seen;
        string curr;
        int i=0;
        int j=0;
        if(s.size()<10) return {};
        while(j<s.size()){
            
        if(curr.size()<10 && j<s.size() ) {
            curr+=s[j];
       }
      if(curr.size()==10){
     if(seen.find(curr)==seen.end()){
           seen.insert(curr);
        }
        else{
            //seen hai
            repeated.insert(curr);
        }     
         curr.erase(0,1);
          i++;
}
        j++;}

for (auto it:repeated) {
    ans.push_back(it);
}
    return ans;}
};