class Solution {
public:
//storing index in deque 
// fir ek while loop to cj=hekc ki koi phle ka index to nhi oroesnt ai current index hona chiye like dq.front<i hai to remove frist waala
// and then rha second wala loop usme if upcoming elemnt presnt list ke lement se  bada hai to rmeove the dq ka elemnt and place the elment that is gretaer fromt hat taht is j uska index

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      int n=nums.size();
      deque<int>dq;
      vector<int>ans;
      int i=0;
      int j=0;
      while(j<n){
        while(!dq.empty()&& dq.front()<i) dq.pop_front();
        while(!dq.empty()&& nums[dq.back()]<=nums[j]) dq.pop_back();
        dq.push_back(j);
        if(j-i+1==k) {
            ans.push_back(nums[dq.front()]);
            i++;
        }
        j++;
      }  
      return ans;
    }
};