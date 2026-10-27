#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> findDifference(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> ans1;
        std::vector<int> ans2;
        for (int i = 0; i < nums1.size(); ++i) {
            if (std::find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end() && std::find(ans1.begin(), ans1.end(), nums1[i]) == ans1.end()) {
                ans1.push_back(nums1[i]);
            }
        }
        for (int i = 0; i < nums2.size(); ++i) {
            if (std::find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end() && std::find(ans2.begin(), ans2.end(), nums2[i]) == ans2.end()) {
                ans2.push_back(nums2[i]);
            }
        }
        return {ans1, ans2};
    }
};