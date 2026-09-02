class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int x=0; x<=32; x++){
            if (pow(2,x) == n){
                return true;
                break;
            }
        }
        return false;
    }
};