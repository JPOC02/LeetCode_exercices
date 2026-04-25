#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        if(nums.size() % 2 != 0){
            return nums;
        }

        std::vector<int> nums_shuffled(nums.size());
        
        for (int i=0; i<nums.size(); i+=2){
            nums_shuffled[i] = nums[i/2];
            nums_shuffled[i+1] = nums[nums.size()/2+i/2];
        }

        return nums_shuffled;
    }
};

/*
vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
*/
