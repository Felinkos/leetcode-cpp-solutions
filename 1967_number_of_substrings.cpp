#include <vector>
#include <string>

class Solution {
public:
    int numOfStrings(std::vector<std::string>& patterns, std::string word) {
        int count = 0;
        for (int i = 0; i < patterns.size(); ++i) {
            if (word.find(patterns[i]) != std::string::npos) {
                ++count;
            }
        }
        return count;
    }
};