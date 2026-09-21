class Solution {
public:
    bool isPalindrome(string s) {
        string str1;
        for (char s1: s){
            if (isalnum(s1)){
                str1 += tolower(s1);
            }
        }
        string str2 = str1;
        reverse(str1.begin(), str1.end());
        return str1==str2;
    }
};