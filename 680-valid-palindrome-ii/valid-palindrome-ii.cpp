class Solution {
public:
    bool validPalindrome(string s) {
        auto check = [&s](int i, int j) {
            while (i < j) {
                if (s[i] != s[j])
                    return false;
                i++;
                j--;
            }
            return true;
        };
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return check(i + 1, j) || check(i, j - 1);
            }
        }
        return true;
    }
};