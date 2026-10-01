#include <string>

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; ++i) {
            std::string s = std::to_string(i);
            int n = s.size();

            if (n % 2 == 0) {
                int sum1 = 0, sum2 = 0;
                int half = n / 2;

                for (int j = 0; j < half; ++j) {
                    sum1 += s[j];
                    sum2 += s[j + half];
                }

                if (sum1 == sum2) {
                    ++count;
                }
            }
        }
        return count;
    }
};