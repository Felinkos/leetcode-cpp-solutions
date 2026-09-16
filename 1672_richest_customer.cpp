#include <vector>
#include <algorithm> 

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int max_wealth = 0;
        for (int i = 0; i < accounts.size(); ++i) {
            int current_wealth = 0;

            for (int j = 0; j < accounts[i].size(); ++j) {
                current_wealth += accounts[i][j];
            }
            
            max_wealth = std::max(max_wealth, current_wealth);
        }
        return max_wealth;
    }
};