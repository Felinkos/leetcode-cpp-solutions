#include <string>

class Solution {
public:
    bool checkString(std::string s) {
        if (s.find("ba") != std::string::npos) {
            return false;
        }
        return true;
    }
};