class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if (x==0) return 0;
        if (x==1) return 1;
        if (x==-1) return (n%2==0)? 1:-1;
        if (n==0) return 1;
        long power = abs((long)n);
        while (power){
            if (power & 1){
                ans *= x;
            }
            x *= x;
            power >>= 1;
        }
        return (n>=0)? ans:(1/ans);
    }
};