#include <string>
#include <algorithm>

class Solution {
public:
    int minimumChairs(std::string s) {
        int current_people = 0;
        int max_chairs = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'E') {
                ++current_people;
            } else {
                --current_people;
            }
            max_chairs = std::max(max_chairs, current_people);
        }
        return max_chairs;
    }
};