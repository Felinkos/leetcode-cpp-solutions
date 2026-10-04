#include <vector>
#include <algorithm>

class Solution {
public:
    int maximizeSum(std::vector<int>& nums, int k) {
        int score = 0;
        int m = *std::max_element(nums.begin(), nums.end());
        for (int i = 0; i < k; ++i) {
            score += m;
            ++m;
        }
        return score;
    }
};