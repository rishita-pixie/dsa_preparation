int minMoves(int* nums, int n) {
int maxi=nums[0];
int ans=0;
for(int i=0;i<n;i++){
    if(nums[i]>maxi) maxi=nums[i];
}
for(int i=0;i<n;i++){
    ans+=maxi-nums[i];
}
return ans;
}