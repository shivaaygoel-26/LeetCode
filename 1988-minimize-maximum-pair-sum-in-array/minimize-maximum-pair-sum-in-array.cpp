class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1,i=0,sum=0,maxs=0;
         while(j>i){
            sum+=nums[i]+nums[j];
            maxs=max(maxs,sum);
            i++;
            j--;
            sum=0;
         }
        
         return maxs;
        
    }
};