class Solution {
public:

    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int i=0;
        int j=0;
        int ans=0;
        
        while(j<s.size()){
            if(j-i+1<k) j++;
            else if(j-i+1==k){
                string temp=s.substr(i,k);
                int x=stoi(temp);
                if(x!=0&&num%x==0) ans++;    
        i++;
        j++;}
        }
return ans;
    }
};