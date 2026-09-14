#include <vector>
#include <cmath>

class Solution {
public:
    int differenceOfSum(std::vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            element_sum += nums[i];

            int temp = nums[i];
            while (temp > 0) {
                digit_sum += temp % 10;
                temp /= 10;
            }
        }
        return std::abs(element_sum - digit_sum);
    }
};