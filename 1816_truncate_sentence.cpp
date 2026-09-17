#include <string>

class Solution {
public:
    std::string truncateSentence(std::string s, int k) {
        std::string ans = "";
        int space_count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                ++space_count;
            }
            if (space_count == k) {
                break;
            }
            ans += s[i];
        }
        return ans;
    }
};