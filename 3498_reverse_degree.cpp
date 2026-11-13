#include <string>

class Solution {
public:
    int reverseDegree(std::string s) {
        int total_sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            int weight = 26 - (s[i] - 'a');
            total_sum += weight * (i + 1);
        }
        return total_sum;  
    }
};