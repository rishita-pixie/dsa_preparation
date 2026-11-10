
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for (int i=0;i<arr.size();i++) {
            sum+= arr[i];
        }
        if(sum%3!=0) {
            return false;
        }
        int target=sum / 3;
        int curr=0;
        int count=0;
        for (int i=0;i<arr.size();i++) {
            curr += arr[i];
            if (curr == target) {
                count++;
                curr = 0;
            }
            if (count==2&&i<arr.size()-1) {
                return true;}
        }

        return false;
    }
};
