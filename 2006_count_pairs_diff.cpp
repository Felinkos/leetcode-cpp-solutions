#include <vector>
#include <cmath>

class Solution {
public:
    int countKDifference(std::vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (std::abs(nums[i] - nums[j]) == k) {
                    ++count;
                }
            }
        }
        return count;
    }
};