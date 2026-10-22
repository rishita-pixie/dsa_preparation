class Solution {
public:
vector<int>pse(int i,vector<int>nums){
    int n=nums.size();
    vector<int>ans;
    stack<int>st;
    for(int j=n-1;j>=i;j--){
        while(!st.empty()&&st.top()<=nums[j]) st.pop();
      if(st.empty()) ans.push_back(-1); 
      else ans.push_back(st.top());
st.push(nums[j]);
    }
return ans;}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size();
      int m=nums2.size();
      vector<int>ans;
      stack<int>st;
      
        for(int i=0;i<n;i++){
            int j=0;
            while(j<m&&nums1[i]!=nums2[j]) j++;
            vector<int>temp=pse(j,nums2);
       if(!temp.empty()){
         ans.push_back(temp.back());
       }
        }
        return ans;
    }
};