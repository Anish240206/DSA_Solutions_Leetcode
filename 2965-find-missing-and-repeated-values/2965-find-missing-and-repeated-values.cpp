class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int N = grid.size();
        unordered_set<int> seen;
        int doubleVal = 0, missing = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (seen.count(grid[i][j])){
                    doubleVal = grid[i][j];
                }
                seen.insert(grid[i][j]);
            }
        }
        for (int num = 1; num <= N * N; num++){
            if (!seen.count(num)){
                missing = num;
                break;
            }
        }
        return {doubleVal, missing};
    }
};