class Solution {
public:
    int smallestNumber(int n, int t) {
      while(true){
       int sum=1;
       int cur=n;
       while(cur>0) {
        int m=cur%10;
        sum*=m;
        cur=cur/10;
       }
    if(sum%t==0) return n;
n++;
    }
    }
};