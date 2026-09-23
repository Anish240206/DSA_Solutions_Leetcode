class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        vector<int> arr;
        int sum = nums[0];
        for (int i=0; i < nums.size()-1; i++){
            if (nums[i] < nums[i+1]){
                sum += nums[i+1];
            }
            else{
                arr.push_back(sum);
                sum = nums[i+1];
            }
        }
        arr.push_back(sum);
        return *max_element(arr.begin(), arr.end());
    }
};