#include <vector>
#include <algorithm>

class Solution {
public:
    int sumCounts(std::vector<int>& nums) {
        int total_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            std::vector<int> distinct;
            for (int j = i; j < nums.size(); ++j) {
                if (std::find(distinct.begin(), distinct.end(), nums[j]) == distinct.end()) {
                    distinct.push_back(nums[j]);
                }

                int count = distinct.size();
                total_sum += count * count;
            }
        }
        return total_sum;
    }
};