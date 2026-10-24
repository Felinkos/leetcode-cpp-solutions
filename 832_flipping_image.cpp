#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
        for (int i = 0; i < image.size(); ++i) {
            std::reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < image[i].size(); ++j) {
                if (image[i][j] == 0) {
                    image[i][j] = 1;
                } else {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};