class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int minindex,maxindex;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
                minindex=i;
            }
            if(nums[i]==maxi){
                maxindex=i;
            }
        }
         int left = max(minindex, maxindex) + 1;
        int right = n - min(minindex, maxindex);
        int both = min(minindex, maxindex) + 1 + n - max(minindex, maxindex);

        return min({left, right, both});
    }
};