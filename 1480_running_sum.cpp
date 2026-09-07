#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> ans;
        int current_sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            current_sum += nums[i];
            ans.push_back(current_sum);
        }
        return ans;
    }
};