#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> ans;
        int max_c = *std::max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); ++i) {
            if ((candies[i] + extraCandies) >= max_c) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};