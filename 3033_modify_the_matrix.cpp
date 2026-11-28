#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> modifiedMatrix(std::vector<std::vector<int>>& matrix) {
        std::vector<std::vector<int>> answer = matrix;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int col = 0; col < cols; ++col) {
            int max_val = -1;
            for (int row = 0; row < rows; ++row) {
                max_val = std::max(max_val, matrix[row][col]);
            }
            for (int row = 0; row < rows; ++row) {
                if (answer[row][col] == -1) {
                    answer[row][col] = max_val;
                }
            }
        }
        return answer;
    }
};