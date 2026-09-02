class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int x=0; x<=16; x++){
            if (pow(4,x) == n){
                return true;
                break;
            }
        }
        return false;
    }
};