class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int rev = 0;
            while(n > 0) {
                int digit = n % 10;
                rev = rev * 10 + digit;
                n /= 10;
            }
            s.insert(nums[i]);
            s.insert(rev);
        }
        return s.size();
    }
};