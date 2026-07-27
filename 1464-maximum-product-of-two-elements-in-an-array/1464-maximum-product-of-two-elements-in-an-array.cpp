class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = 0, largest2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            int digit = nums[i];
            if (digit > largest) {
                largest2 = largest;
                largest = digit;
            }
            else if (digit > largest2) {
                largest2 = digit;
            }
        }
        return (largest - 1) * (largest2 - 1);
    }
};