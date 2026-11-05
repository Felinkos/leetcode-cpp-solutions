class Solution {
public:
    int numberOfMatches(int n) {
        int total_matches = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                total_matches += n / 2;
                n = n / 2;
            } else if (n % 2 != 0) {
                total_matches += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return total_matches;
    }
};