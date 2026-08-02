class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        int flag = 0;
        for (int i=0; i < (int)nums.size() - 1; i++){
            if (nums[i]==nums[i+1]){
                flag = 1;
            }
        }
        return (flag==0)? false : true;
    }
};