class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);

        for(int j = 0; j < nums.size(); j++) {
            int target = nums[j];

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] < target) {
                    ans[j]++;
                }
            }
        }

        return ans;
    }
};