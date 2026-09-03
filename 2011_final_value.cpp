#include <vector>
#include <string>

class Solution {
public:
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        int X = 0;
        
        for (int i = 0; i < operations.size(); ++i) {
            if (operations[i].find("--") != std::string::npos) {
                --X;
            }
            else if (operations[i].find("++") != std::string::npos) {
                ++X;
            }
        }
        return X;
    }
};
