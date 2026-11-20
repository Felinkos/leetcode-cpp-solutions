#include <vector>
#include <algorithm>

class Solution {
public:
    double minimumAverage(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        double current_avg = 0;
        double min_avg = 1000000.0;
        
        while (left < right) {
            current_avg = (nums[left] + nums[right]) / 2.0;
            min_avg = std::min(min_avg, current_avg);
            ++left;
            --right;
        }
        return min_avg;
    }
};
