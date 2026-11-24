#include <string>

class Solution {
public:
    bool hasSameDigits(std::string s) {
        while (s.size() > 2) {
            std::string next_s = "";
            for (int i = 0; i < s.size() - 1; ++i) {
                char new_digit = ((s[i] - '0') + (s[i + 1] - '0')) % 10 + '0';
                next_s.push_back(new_digit);
            }
            s = next_s;
        }
        return s[0] == s[1];
    }
};
