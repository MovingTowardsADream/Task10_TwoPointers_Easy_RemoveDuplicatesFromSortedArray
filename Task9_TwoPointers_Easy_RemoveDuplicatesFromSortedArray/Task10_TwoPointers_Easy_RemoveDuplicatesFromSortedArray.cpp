#include <iostream>
#include <vector>

class Solution {
public:
    static int removeDuplicates(std::vector<int>& nums) {
        int i = 0;
        for (int j = 1;j < nums.size();j++) {
            if (nums[j-1] == nums[j]) {
                i++;
            }
            else {
                nums[j - i] = nums[j];
            }
        }
        for (int i : nums) {
            std::cout << i << " ";
        }
        return nums.size() - i;
    }
};

int main()
{
    std::vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
    std::cout << Solution::removeDuplicates(nums);
}
