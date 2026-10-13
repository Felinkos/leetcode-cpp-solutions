#include <vector>
#include <string>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            std::string s = std::to_string(nums[i]);
            int digits = s.size();
            if (digits % 2 == 0) {
                ++count;
            }
        }
        return count;
    }
};