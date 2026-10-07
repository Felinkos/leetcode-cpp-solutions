#include <vector>
#include <string>

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); ++i) {
            bool is_clean = true;
            for (int j = 0; j < words[i].size(); ++j) {
                if (allowed.find(words[i][j]) == std::string::npos) {
                    is_clean = false;
                    break;
                }
            }
            if (is_clean == true) {
                ++count;
            }
        }
        return count;
    }
};