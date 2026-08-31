#include <string>
#include <cmath>

class Solution {
public:
    int scoreOfString(std::string s) {
        int total_score = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            total_score += std::abs(s[i] - s[i + 1]);
        }
        return total_score;
    }
};