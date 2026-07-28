class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0],b=nums[nums.size()-1];
        while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;

    }
};