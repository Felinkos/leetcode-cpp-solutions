#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string firstPalindrome(std::vector<std::string>& words) {
        for (int i = 0; i < words.size(); ++i) {
            std::string t = words[i];
            std::reverse(t.begin(), t.end());

            if (words[i] == t) {
                return words[i];
            }
        }
        return "";
    }
};