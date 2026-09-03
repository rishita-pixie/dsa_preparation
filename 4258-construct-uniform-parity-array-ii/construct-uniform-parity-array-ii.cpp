class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int n=arr.size();
        int mini=arr[0];
        for(int i=1;i<n;i++){
          mini=min(mini,arr[i]);   
        }
        if(mini%2==1){
           return true; 

        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==1) return false;
        }
        return true;
    }

};