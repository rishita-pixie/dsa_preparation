class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
    int n=arr.size();
    if(k==0&& n==0) return 0;
    int maxi=INT_MIN;
  
    int res=0;
    int diff=0;
    
     for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
          int mini=INT_MAX;
          for(int j=i;j<n;j++){
        mini=min(arr[j],mini);}
        diff=maxi-mini;
        if(diff<=k) return i;
     }
     return -1;
    }
};