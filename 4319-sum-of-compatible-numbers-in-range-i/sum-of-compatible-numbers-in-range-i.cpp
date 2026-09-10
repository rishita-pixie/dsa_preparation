class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans=0;
        int strt=max(1,n-k);
        int end=n+k;
        for(int i=strt;i<=end;i++){
            if((n&i)==0) ans+=i;
        }
        return ans;
    }
};