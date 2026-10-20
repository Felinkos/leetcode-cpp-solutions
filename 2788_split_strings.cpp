#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> splitWordsBySeparator(std::vector<std::string>& words, char separator) {
        std::vector<std::string> ans;
        for (int i = 0; i < words.size(); ++i) {
            std::string current_word = "";
            for (int j = 0; j < words[i].size(); ++j) {
                if (words[i][j] != separator) {
                    current_word += words[i][j];
                } else {
                    if (!current_word.empty()) {
                        ans.push_back(current_word);
                        current_word = "";
                    }
                }
            }
            if (!current_word.empty()) {
                ans.push_back(current_word);
            }
        }
        return ans;
    }
};