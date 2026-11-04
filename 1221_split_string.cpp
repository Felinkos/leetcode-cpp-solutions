#include <string>

class Solution {
public:
    int balancedStringSplit(std::string s) {
        int count = 0;
        int balance = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'R') {
                ++balance;
            }
            if (s[i] == 'L') {
                --balance;
            }
            if (balance == 0) {
                ++count;
            }
        }
        return count;
    }
};