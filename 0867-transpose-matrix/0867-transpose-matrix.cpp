class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowl = matrix.size(), coll = matrix[0].size();
        vector<vector<int>>TM(coll, vector<int>(rowl));
        for (int r=0; r<rowl; r++){
            for (int c=0; c<coll; c++){
                TM[c][r] = matrix[r][c];
            }
        }
        return TM;
    }
};