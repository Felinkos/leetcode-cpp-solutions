#include <vector>
#include <string>

class Solution {
public:
    int countPrefixes(std::vector<std::string>& words, std::string s) {
        int count = 0;
        for (int i = 0; i < words.size(); ++i) {
            if (s.find(words[i]) == 0) {
                ++count;
            }
        }
        return count;
    }
};