#include <vector>
#include <algorithm>

class Solution {
public:
    int buyChoco(std::vector<int>& prices, int money) {
        std::sort(prices.begin(), prices.end());
        int min_cost = prices[0] + prices[1];
        if (money >= min_cost) {
            return money - min_cost;
        }
        return money;
    }
};