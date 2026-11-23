#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
        std::vector<int> freq(101, 0);
        int max_freq = 0;
        int total_elements = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ++freq[nums[i]];
            max_freq = std::max(max_freq, freq[nums[i]]);
        }
        for (int i = 0; i < freq.size(); ++i) {
            if (freq[i] == max_freq) {
                total_elements += freq[i];
            }
        }
        return total_elements;
    }
};