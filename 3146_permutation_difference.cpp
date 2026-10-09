#include <string>
#include <cmath>

class Solution {
public:
    int findPermutationDifference(std::string s, std::string t) {
        int total_diff = 0;
        for (int i = 0; i < s.size(); ++i) {
            int j = t.find(s[i]);
            total_diff += std::abs(i - j);
        }
        return total_diff;
    }
};