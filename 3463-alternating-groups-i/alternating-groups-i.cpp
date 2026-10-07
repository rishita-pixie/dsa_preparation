class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int i=0;
        int ans=0;
        int j=0;
        int n=colors.size();
        int cnt=0;
        while(j<n+2){
            if(colors[j%n]!=colors[(j-1+n)%n]) j++;
              else {
                i=j;
                j++;
              }
               if(j-i==3){
                ans++;
                i++;
               }
        }
        return ans;
    }
};