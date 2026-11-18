class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
      int n=tokens.size();
      int score=0;
      int ans=0;
      sort(tokens.begin(),tokens.end());
    int small=0;
    int big=n-1;
      while(small<=big){
    
        if(power>=tokens[small]){
            power-=tokens[small];
          score+=1;
          small++;
        }
       
       else if(score>=1){
        if(power<tokens[big]){
            power+=tokens[big];
            score-=1;
            big--;
        }
       }
       else{
        break;
       }
      
     ans=max(ans,score);
      }
      return ans;
    }
};