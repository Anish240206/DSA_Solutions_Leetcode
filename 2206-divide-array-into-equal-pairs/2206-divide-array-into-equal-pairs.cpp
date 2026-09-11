class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int flag = 0;
        for (int i=0; i<nums.size(); i+=2){
            if (nums[i]!=nums[i+1])
                flag = 1;
        }
        return (flag==0);
    }
};