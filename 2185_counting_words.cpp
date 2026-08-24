#include <vector>
#include <string>

class Solution {
public:
    int prefixCount(std::vector<std::string>& words, std::string pref) {
        int count = 0;
        for (int i = 0; i < words.size(); ++i) {
            if(words[i].find(pref) == 0) {
                ++count;
            }
        }
        return count;
    }
};