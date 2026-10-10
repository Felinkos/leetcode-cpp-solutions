#include <vector>
#include <string>

class Solution {
public:
    int maximumNumberOfStringPairs(std::vector<std::string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                if (words[j] == std::string() + words[i][1] + words[i][0]) {
                    ++count;
                }
            }
        }
        return count;
    }
};