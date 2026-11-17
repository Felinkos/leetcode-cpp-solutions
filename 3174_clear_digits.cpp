#include <string>
#include <cctype>

class Solution {
public:
    std::string clearDigits(std::string s) {
        std::string ans = "";
        for (int i = 0; i < s.size(); ++i) {
            if (std::isdigit(s[i]) != true) {
                ans.push_back(s[i]);
            } else {
                ans.pop_back();
            }
        }
        return ans;
    }
};