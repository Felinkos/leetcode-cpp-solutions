class Solution {
public:
    int pivotInteger(int n) {
        for (int x = 1; x <= n; ++x) {
            int left_sum = 0;
            int right_sum = 0;
            for (int i = 1; i <= x; ++i) {
                left_sum += i;
            }
            for (int j = x; j <= n; ++j) {
                right_sum += j;
            }
            if (left_sum == right_sum) {
                return x;
            }
        }
        return -1;
    }
};