class Solution {
public:
    long long countCommas(long long n) {
        long ans = 0;
        long cur = 1000;
        while (cur<=n){
            ans += n-cur+1;
            cur *= 1000;
        }
        return ans;
    }
};