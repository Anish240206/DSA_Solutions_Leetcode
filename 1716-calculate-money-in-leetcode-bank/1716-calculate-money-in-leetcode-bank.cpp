class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int count = n;
        for (int i=1; i<=n/7+1; i++){
            for (int j=0; j<=6 && count>0; j++){
                sum += (i+j);
                count--;
            }
        }
        return sum;
    }
};