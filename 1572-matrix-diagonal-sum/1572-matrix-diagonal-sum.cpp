class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int sum = 0;
        for (int r=0; r<row; r++){
            for (int c=0; c<col; c++){
                if (r==c || r==(row-c-1))
                    sum += mat[r][c];
            }
        }
        return sum;
    }
};