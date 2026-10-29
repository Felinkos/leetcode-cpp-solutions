#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
        for (int i = 0; i < heights.size(); ++i ) {
            for (int j = i + 1; j < heights.size(); ++j) {
                if (heights[j] > heights[i]) {
                    std::swap(heights[i], heights[j]);
                    std::swap(names[i], names[j]);
                }
            }
        }
        return names;
    }
};