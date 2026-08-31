class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        int count = 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        // Handle 2 separately
        for (int i = 4; i < n; i += 2){
            isPrime[i] = false;
        }
        for (int i = 3; i * i < n; i += 2){
            if (isPrime[i]){
                for (int j = i * i; j < n; j += 2 * i){
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2; i < n; i++){
            if (isPrime[i]){
                count++;
            }
        }
        return count;
    }
};