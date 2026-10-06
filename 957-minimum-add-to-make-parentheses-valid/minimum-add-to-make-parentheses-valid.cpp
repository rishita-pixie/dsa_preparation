class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cnt=0;
        for(char ch:s){
            if(ch=='(') st.push('(');
            else if(ch==')'){
                if(!st.empty()&&st.top()=='(') st.pop();
                else cnt++;
            }
            
            }
            if(!st.empty()) cnt+=st.size();
        
       return cnt; 
    }
};