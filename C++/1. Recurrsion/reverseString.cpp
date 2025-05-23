class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp_char;
        int size = s.size();
        for(int i = 0; i < size/2; i++){
            temp_char = s[i];
            s[i] = s[size-i-1];
            s[size-i-1] = temp_char;
        }
    }
};