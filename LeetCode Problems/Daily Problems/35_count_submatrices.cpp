// Problem - Count submatrices with equal frequency of x and y (3212) - LeetCode

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int result = 0;

        // prefix sum variables
        vector<vector<int>> sum(n, vector<int>(m, 0));
        vector<vector<int>> xCount(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int val = 0;
                if (grid[i][j] == 'X') val = 1;
                else if (grid[i][j] == 'Y') val = -1;

                sum[i][j] = val;
                xCount[i][j] = (grid[i][j] == 'X');

                if (i > 0) {
                    sum[i][j] += sum[i - 1][j];
                    xCount[i][j] += xCount[i - 1][j];
                }

                if (j > 0) {
                    sum[i][j] += sum[i][j - 1];
                    xCount[i][j] += xCount[i][j - 1];
                }

                if (i > 0 && j > 0) {
                    sum[i][j] -= sum[i - 1][j - 1];
                    xCount[i][j] -= xCount[i - 1][j - 1];
                }

                // check condition
                if (sum[i][j] == 0 && xCount[i][j] > 0) {
                    result++;
                }
            }
        }

        return result;
    }
};