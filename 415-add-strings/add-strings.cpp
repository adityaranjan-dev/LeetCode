class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ans = "";

        int i = num1.length() - 1;
        int j = num2.length() - 1;

        int sum;

        while(i >= 0 || j >= 0 || carry != 0) {
            int val1 = (i >= 0) ? num1[i] - '0' : 0;
            int val2 = (j >= 0) ? num2[j] - '0' : 0;

            sum = val1 + val2 + carry;
            carry = sum / 10;
            sum %= 10;

            ans = char(sum + '0') + ans;
            i--;
            j--;
        }
        return ans;
    }
};