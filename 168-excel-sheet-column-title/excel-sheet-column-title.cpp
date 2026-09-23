class Solution {
public:
    string convertToTitle(int column) {
        string ans;

        while(column > 0) {
            column--;
            int rem = column % 26;
            ans += char('A' + rem);
            column /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};