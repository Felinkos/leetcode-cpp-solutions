#include <vector>

class Solution {
public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
        int total_sum = 0;
        int n = mat.size();
        for (int i = 0; i < n; ++i) {
            if (i == n - 1 - i) {
                total_sum += mat[i][i];
            } else {
                total_sum += mat[i][i] + mat[i][n - 1 - i];
            }
        }
        return total_sum;
    }
};