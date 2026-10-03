#include <string>

class Solution {
public:
    std::string maximumOddBinaryNumber(std::string s) {
        int ones = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') {
                ++ones;
            }
        }
        return std::string(ones - 1, '1') + std::string(s.size() - ones, '0') + "1";
    }
};