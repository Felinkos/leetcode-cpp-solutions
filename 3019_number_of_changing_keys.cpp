#include <string>
#include <cctype>

class Solution {
public:
    int countKeyChanges(std::string s) {
        int changes = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (std::tolower(s[i]) != std::tolower(s[i + 1])) {
                ++changes;
            }
        }
        return changes;
    }
};
