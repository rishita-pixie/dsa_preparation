class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // slidng window plus 2 pointer approach 
        int n=arr.size();
        vector<int>ans;
        int left=0;
        int right=n-1;
        while (right-left+1>k) {
    if (abs(arr[left] - x) > abs(arr[right] - x)) {
        left++;
    } else {
        right--;
    }}
    for(int i=left;i<=right;i++){
    ans.push_back(arr[i]);
}
return ans;
    }
};