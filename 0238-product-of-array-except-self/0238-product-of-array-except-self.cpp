// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//        vector<int>ans(nums.size());
//        for(int i=0;i<nums.size();i++){
//          int leftproduct=1,rightproduct=1;
//         for(int j=0;j<i;j++){
//             leftproduct*=nums[j];
//         }
//         for(int k=i+1;k<nums.size();k++){
//             rightproduct*=nums[k];
//         }
//         ans[i]=leftproduct*rightproduct;
//        } 
//        return ans;
//     }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        int left = 1;

        // Left product
        for(int i = 0; i < n; i++) {
            ans[i] = left;
            left *= nums[i];
        }

        int right = 1;

        // Right product
        for(int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }

        return ans;
    }
};