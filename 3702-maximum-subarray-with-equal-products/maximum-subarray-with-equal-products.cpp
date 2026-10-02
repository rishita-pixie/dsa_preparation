class Solution {
public:
    int maxLength(vector<int>& nums) {
     int n=nums.size();
         int i=0;

         int ans=0;
         while(i<n){
         long long product=1;
         int j=i;
         int lcm=1;
         int gcd=0;
         while(j<n){
            if(product > 1e18 / nums[j]) break;
           product*=nums[j];
           gcd=std::gcd(gcd,nums[j]);
           lcm=std::lcm(lcm,nums[j]);
           if(product==gcd*lcm){
            ans=max(ans,j-i+1);
           } 

j++;}
i++;
         }
    return ans;}
};