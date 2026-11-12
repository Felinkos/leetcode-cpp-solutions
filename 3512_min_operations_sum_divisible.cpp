#include <vector>

class Solution {
public:
    int minOperations(std::vector<int>& nums, int k) {
        int total_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            total_sum += nums[i];
        }
        return total_sum % k;
    }
};