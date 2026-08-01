class Solution {
public:
    bool isPalindrome(int x){
        if (x<0){
            return false;
        }
        else{
            long int x1 = x, rev = 0;
            while (x1!=0){
                rev = rev*10 + (x1 % 10);
                x1 = x1/10;
            }
            return x == rev;
        }
    }
};