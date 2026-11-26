#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> getFinalState(std::vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; ++i) {
            auto min_number = std::min_element(nums.begin(), nums.end());
            *min_number *= multiplier;
        }
        return nums;
    }
};