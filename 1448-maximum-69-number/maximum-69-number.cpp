class Solution {
public:
    int maximum69Number (int num) {
       
        int ans=0;
        int maxi=num;
        vector<int>arr;
        while(num>0){
            int dig=num%10;
            arr.push_back(dig);
            num=num/10;
        }
        int n=arr.size();
       for(int i=n-1;i>=0;i--){
        if(arr[i]==6){ arr[i]=9;
        break;}
       }
       for(int i=n-1;i>=0;i--){
        ans=ans*10+arr[i];
       }
        return ans;
    }
};