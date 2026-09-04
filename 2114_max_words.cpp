#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int max_words = 0;

        for (int i = 0; i < sentences.size(); ++i) {
            std::string current_sentence = sentences[i];
            
            int count = 1;

            for (int j = 0; j < current_sentence.size(); ++j) {
                if (current_sentence[j] == ' ') {
                    ++count;
                }
            }
            max_words = std::max(max_words, count);
        }
        return max_words;
    }
};