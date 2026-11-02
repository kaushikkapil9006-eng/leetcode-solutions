class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;

        for(int i = 0; i < m; i++) {

            int mini = matrix[i][0];

            // Find minimum in current row
            for(int j = 0; j < n; j++) {
                mini = min(mini, matrix[i][j]);
            }

            // Find maximum in the column of mini
            int col = 0;

            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == mini) {
                    col = j;
                    break;
                }
            }

            int maxi = matrix[0][col];

            for(int k = 0; k < m; k++) {
                maxi = max(maxi, matrix[k][col]);
            }

            if(mini == maxi) {
                ans.push_back(mini);
            }
        }

        return ans;
    }
};