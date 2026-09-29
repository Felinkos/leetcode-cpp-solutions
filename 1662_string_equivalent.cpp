#include <vector>
#include <string>

class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        std::string s1 = "";
        std::string s2 = "";
        for (int i = 0; i < word1.size(); ++i) {
            s1 += word1[i];
        }
        for (int i = 0; i < word2.size(); ++i) {
            s2 += word2[i];
        }
        if (s1 == s2) {
            return true;
        } else {
            return false;
        }

    }
};