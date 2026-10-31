#include <vector>

class Solution {
public:
    int sumIndicesWithKSetBits(std::vector<int>& nums, int k) {
        int total_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (__builtin_popcount(i) == k) {
                total_sum += nums[i];
            }
        }
        return total_sum;
    }
};