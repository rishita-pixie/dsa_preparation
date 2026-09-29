class Solution {
public:
    vector<int> decrypt(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> ans(n,0);
        if(k==0){
           return ans;
        }
        else if(k>0){
          
           for(int i=0;i<n;i++){
            int sum=0;
            int step=1;
            while(step<=k){
                sum+=arr[(i+step)%n];
                step++;
            }
            ans[i]=sum;
           }
    }
    else if(k<0){
        
        for(int i=0;i<n;i++){
             int sum=0;
             int step=1;
             while(step<=abs(k)){
                sum+=arr[(i-step+n)%n];
                step++;
             }
             ans[i]=sum;
        }
    }
        return ans;
    }
};