class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0;
        int j=0;
        vector<int>ans;
        map<int,int>mp;
     
        while(j<k){
       mp[arr[j]]++;
        j++;
        }
        ans.push_back(mp.rbegin()->first);
           while(j<n){
   
         mp[arr[i]]--;
       if(mp[arr[i]] == 0)
    mp.erase(arr[i]);
i++;
          mp[arr[j]]++;
          j++;
          ans.push_back(mp.rbegin()->first);
        }
      
return ans;
    }
};