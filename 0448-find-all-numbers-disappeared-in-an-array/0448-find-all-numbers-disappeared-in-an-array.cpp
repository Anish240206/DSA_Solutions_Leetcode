class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> res;
        int idx = 0;
        for (int num = 1; num <= n; num++){
            while (idx < n && nums[idx] < num){
                idx++;
            }
            if (idx == n || nums[idx] > num){
                res.push_back(num);
            }
        }
        return res;
    }
};