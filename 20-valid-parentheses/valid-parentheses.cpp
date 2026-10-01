class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='{'||c=='['||c=='(') st.push(c);
            else {
                if(st.empty()) return false;
        char one=st.top();
                st.pop();
                if(one=='{'&&c!='}'||one=='['&&c!=']'||one=='('&&c!=')') return false;
        }
        }
        if(!st.empty()) return false;
    return true;    }
};