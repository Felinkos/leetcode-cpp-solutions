#include <vector>

class Solution {
public:
    int countTestedDevices(std::vector<int>& batteryPercentages) {
        int count = 0;
        for (int i = 0; i < batteryPercentages.size(); ++i) {
            if (batteryPercentages[i] - count > 0) {
                ++count;
            }
        }
        return count;
    }
};