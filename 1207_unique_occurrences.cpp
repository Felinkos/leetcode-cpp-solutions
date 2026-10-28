#include <vector>
#include <algorithm>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        std::vector<int> counts;
        int current_count = 1;
        for (int i = 1; i < arr.size(); ++i) {
            std::vector<int> counts;
            if (arr[i] == arr[i - 1]) {
                ++current_count;
            } else {
                counts.push_back(current_count);
                current_count = 1;
            }
            counts.push_back(current_count);
            std::sort(counts.begin(), counts.end());
            for (int i = 1; i < counts.size(); ++i) {
                if (counts[i] == counts[i - 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};