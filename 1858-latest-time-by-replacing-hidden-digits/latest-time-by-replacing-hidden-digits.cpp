class Solution {
public:
    string maximumTime(string time) {
        int n=time.size();
        string ans;
        for(int i=0;i<n;i++){
            if(time[0]=='?'){
            if(time[1]=='?'||time[1]<='3' ) time[0]='2';
            else time[0]='1';
            }
            else if(time[1]=='?'&&time[0]=='2') time[1]='3';
              else if(time[1]=='?'&&time[0]=='1'||time[1]=='?'&&time[0]=='0') time[1]='9';
              else if(time[3]=='?') time[3]='5';
else if(time[4]=='?')time[4]='9';
        }
        return time;
    }
};