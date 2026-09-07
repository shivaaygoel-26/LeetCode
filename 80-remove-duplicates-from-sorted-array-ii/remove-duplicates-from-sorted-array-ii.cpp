class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;

        for (int i = 1; i < nums.size(); ) {
            if (nums[i] == nums[i - 1]) {
                count++;

                if (count > 2) {
                    nums.erase(nums.begin() + i);
                    continue;   
                }
            } else {
                count = 1;
            }

            i++;
        }

        return nums.size();
    }
};