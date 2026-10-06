class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int n=arr.size();
         int ans=INT_MAX;
         int i=0;
         int j=0;
         int sum=0;
         while(j<n){

                sum+=arr[j];
              if(j-i+1>r){
                 sum-=arr[i];
             i++;
            }
            if(j-i+1>=l&&j-i+1<=r){
                int tempi=i;
                int tempsum=sum;
                while(j-tempi+1>=l){
                     if(tempsum>0) ans=min(ans,tempsum);
                     tempsum-=arr[tempi];
                     tempi++;
                }
               
            }
          
         j++;}
   return ans == INT_MAX ? -1 : ans;}
};