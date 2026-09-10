#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        std::vector<int> ans;

        for (int i = 0; i < nums.size(); ++i) {
            int left_sum = 0;
            int right_sum = 0;

            for (int j = 0; j < i; ++j) {
                left_sum += nums[j];
            }

            for (int j = i + 1; j < nums.size(); ++j) {
                right_sum += nums[j];
            }

            ans.push_back(std::abs(left_sum - right_sum));
        }
        return ans;
    }
};