class Solution {
public:
    bool isRectangleOverlap(vector<int>& arr, vector<int>& brr) {
        int n=arr.size();
        int m=brr.size();
   
                if(arr[3]>brr[1]&&arr[2]>brr[0]&&brr[3]>arr[1]&&brr[2]>arr[0]) return true;
        return false;
    }
};