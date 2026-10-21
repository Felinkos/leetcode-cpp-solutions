#include <vector>

class Solution {
public:
    int arithmeticTriplets(std::vector<int>& nums, int diff) {
        int triplets = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                for (int k = j + 1; k < nums.size(); ++k) {
                    if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff) {
                        ++triplets;
                    }
                }
            }
        }
        return triplets;
    }
};