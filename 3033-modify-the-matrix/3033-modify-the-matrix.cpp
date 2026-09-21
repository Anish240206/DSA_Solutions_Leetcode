class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer(matrix);
        for (int i=0; i<answer.size(); i++){
            for (int j=0; j<answer[0].size(); j++){
                if (answer[i][j]==-1){
                    int maximum = INT_MIN;
                    for (int k=0; k<answer.size(); k++){
                        maximum = max(maximum, answer[k][j]);
                    }
                    answer[i][j] = maximum;
                }
            }
        }
        return answer;
    }
};