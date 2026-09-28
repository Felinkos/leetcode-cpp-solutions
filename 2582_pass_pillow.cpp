class Solution {
public:
    int passThePillow(int n, int time) {
        int position = 1;
        int direction = 1;

        while (time > 0) {
            position += direction;
            --time;
            if (position == n) {
                direction = -1;
            }
            if (position == 1) {
                direction = 1;
            }
        }
        return position;
    }
};