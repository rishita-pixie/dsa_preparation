class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //binary search approach hum sochnege ki konsei side ko correct hoga 
        //bs indices dekhene fir result print ke loye we will be doing left seleft+k tak ke elemnts 
        int n=arr.size();
        vector<int>ans;
        int left=0;
          int right=n-k;
           while(left<right){
          int mid=left+(right-left)/2;
         if(x-arr[mid]>arr[mid+k]-x)
    {
        left=mid+1;
    }
    else right=mid;

    }
    for(int i=left;i<left+k;i++){
        ans.push_back(arr[i]);
    }
    return ans;}
};