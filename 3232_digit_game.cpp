#include <vector>

class Solution {
public:
    bool canAliceWin(std::vector<int>& nums) {
        int single_sum = 0;
        int double_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < 10) {
                single_sum += nums[i];
            } else {
                double_sum += nums[i];
            }
        }
        return single_sum != double_sum;
    }
};