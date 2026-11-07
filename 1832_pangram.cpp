#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        std::string alphabet = "";
        for (int i = 0; i < sentence.size(); ++i) {
            if (alphabet.find(sentence[i]) == std::string::npos) {
                alphabet += sentence[i];
            }
        }
        return alphabet.size() == 26;
    }
};