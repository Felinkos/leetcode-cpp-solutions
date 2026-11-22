#include <vector>
#include <algorithm>

class Solution {
public:
    int encrypt(int x) {
        int max_digit = 0;
        int multiplier = 0;
        while (x > 0) {
            max_digit = std::max(max_digit, x % 10);
            multiplier = multiplier * 10 + 1;
            x /= 10;
        }
        return max_digit * multiplier;
    }
    int sumOfEncryptedInt(std::vector<int>& nums) {
        int total_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            total_sum += encrypt(nums[i]);
        }
        return total_sum;
    }
};