#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string ans = "";
        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == 'G') {
                ans += 'G';
            }
            if (command[i] == '(' && command[i + 1] == ')') {
                ans += 'o';
                ++i;
            }
            if (command[i] == '(' && command[i + 1] == 'a') {
                ans += "al";
                i += 3;
            }
        }
        return ans;
    }
};