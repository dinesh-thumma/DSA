class Solution {
public:
    vector<char> stringCleaner(string s) {
        vector<char> str;
        char temp_char;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                temp_char = (char)(s[i] + 32);
                str.emplace_back(temp_char);
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                str.emplace_back(s[i]);
            } else if (s[i] >= '0' && s[i] <= '9') {
                str.emplace_back(s[i]);
            }
        }
        return str;
    }
    bool palindromeChecker(vector<char>& arr, int start, int end) {
        if (start >= end) {
            return true;
        } else if (arr[start] == arr[end]) {
            return palindromeChecker(arr, start + 1, end - 1);
        } else
            return false;
    }
    bool isPalindrome(string s) {
        if (s.size() == 0)
            return true;
        else {
            vector<char> arr = stringCleaner(s);
            int start = 0;
            int end = arr.size() - 1;
            return palindromeChecker(arr, start, end);
        }
    }
};