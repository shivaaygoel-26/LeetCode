class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        if(nums[0]!=0){return 0;}
        int sum=0,s=0;
        for(int x:nums){
            sum+=x;
        }
        for(int i=0;i<=nums.size();i++){
            s+=i;
        }
        return s-sum;
    }
};