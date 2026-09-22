#include <string>
#include <vector>

class Solution {
public:
    std::string decodeMessage(std::string key, std::string message) {
        std::string ans = "";

        std::vector<char> m (26, 0);
        char current_char = 'a';
        for (int i = 0; i < key.size(); ++i) {
            if (key[i] != ' ' && m[key[i] - 'a'] == 0) {
                m[key[i] - 'a'] = current_char;
                ++current_char;
            }
        }
        for (int j = 0; j < message.size(); ++j) {
            if(message[j] == ' ') {
                ans += ' ';
            } else {
                ans += m[message[j] - 'a'];
            }
        }
        return ans;
    }
};