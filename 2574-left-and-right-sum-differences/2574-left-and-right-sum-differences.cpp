class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftsum = 0, rightsum = 0;
        for(int x : nums) {
            rightsum += x;
        }
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            rightsum -= nums[i];
            ans.push_back(abs(leftsum - rightsum));
            leftsum += nums[i];
        }
        return ans;
    }
};