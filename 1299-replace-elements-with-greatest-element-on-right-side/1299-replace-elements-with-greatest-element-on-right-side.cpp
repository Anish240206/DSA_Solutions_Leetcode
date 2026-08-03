class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> Elements;
        reverse(arr.begin(), arr.end());
        int maxRight = -1;
        for (int i : arr){
            Elements.push_back(maxRight);
            if (i > maxRight){
                maxRight = i;
            }
        }
        reverse(Elements.begin(), Elements.end());
        return Elements;
    }
};