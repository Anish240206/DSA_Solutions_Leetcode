class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int expSum = N*(N+1)/2;
        int Sum = 0;
        for (int i=0;i<N;i++){
            Sum += nums[i];
        }
        return expSum-Sum;
    }
};