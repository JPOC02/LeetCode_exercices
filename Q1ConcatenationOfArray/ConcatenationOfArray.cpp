#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        std::vector<int> ans(2*nums.size());
        for (int i=0; i < nums.size(); i++){
            ans[i] = nums[i];
            ans[i+nums.size()] = nums[i];
        }

        return ans;
    }
};
