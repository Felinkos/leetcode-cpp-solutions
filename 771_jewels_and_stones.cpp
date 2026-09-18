#include <string>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int count = 0;
        for (int i = 0; i < stones.size(); ++i) {
            for (int j = 0; j < jewels.size(); ++j) {
                if (stones[i] == jewels[j]) {
                    ++count;
                }
            }
        }
        return count;
    }
};