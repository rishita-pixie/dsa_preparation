class Solution {
public:
    int longestPalindrome(vector<string>& words) {
      int n=words.size();
        bool center=false;
        int ans=0;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        for(string &word:words){
string rev=word;
reverse(rev.begin(),rev.end());

if(rev!=word){
    if(mp[word]>0&&mp[rev]>0){
        mp[word]--;
        mp[rev]--;
        ans+=4;
    }
}
    else {
        if(mp[word]>=2){
        mp[word]-=2;
        ans+=4;
    }
    else if(mp[word]==1&&center==false){
        mp[word]--;
        center=true;
        ans+=2;
    }

    
}
        }
        return ans;
    }
};