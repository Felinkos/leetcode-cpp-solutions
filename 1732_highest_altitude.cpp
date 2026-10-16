#include <vector>

class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int current_altitude = 0;
        int max_altitude = 0;
        for (int i = 0; i < gain.size(); ++i) {
            current_altitude += gain[i];
            if (current_altitude > max_altitude) {
                max_altitude = current_altitude;
            }
        }
        return max_altitude;
    }
};