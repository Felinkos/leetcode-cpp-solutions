#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> twoOutOfThree(std::vector<int>& nums1, std::vector<int>& nums2, std::vector<int>& nums3) {
        std::vector<int> ans;
        for (int x = 0; x <= 100; ++x){
            bool in_nums1 = (std::find(nums1.begin(), nums1.end(), x) != nums1.end());
            bool in_nums2 = (std::find(nums2.begin(), nums2.end(), x) != nums2.end());
            bool in_nums3 = (std::find(nums3.begin(), nums3.end(), x) != nums3.end());
            if (in_nums1 + in_nums2 + in_nums3 >= 2) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};