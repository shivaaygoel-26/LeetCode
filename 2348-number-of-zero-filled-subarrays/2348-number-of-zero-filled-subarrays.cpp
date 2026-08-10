class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ct=0,subarrays=0;
        for(int i=0;i<nums.size();i++){
if(nums[i]==0){
    ct++;
    subarrays+=ct;
}
if(nums[i]!=0){
    ct=0;
}
        }
        return subarrays;
    }
};