class Solution {
public:
    int minimumRecolors(string arr, int k) {
        int n=arr.size();
    int maincount=0;
    int ans=INT_MAX;
    int i=0;
    int j=0;
    int w=0;
    int b=0;
    while(j<n){
        if(j-i+1<k){
            if(arr[j]=='W') w+=1;
            else b+=1;
        }
        else if(j-i+1==k){
            if(arr[j]=='W') w++;
              else b++;
            if(b>=k) return 0;
            ans=min(ans,w);
           if(arr[i]=='W') w--;
            else b--;
            i++;
                }
        
        else if(j-i+1>k){
            if(arr[i]=='W') w--;
            else b--;
            i++;
        }
        j++;
    }
    return ans;
    }
};