class Solution {
public:
    int totalNumbers(vector<int>& s) {
        int n=s.size();
        int ans=0;
       set<int>st;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j||j==k||k==i) continue;
                if(s[i]==0) continue;
if(s[k]%2!=0) continue;
int num=s[i]*100+s[j]*10+s[k];
st.insert(num);
            }

        }
       }
       return st.size();
    }
};