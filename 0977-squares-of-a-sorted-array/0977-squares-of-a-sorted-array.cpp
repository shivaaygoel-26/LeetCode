class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            if(pow(nums[l],2)>pow(nums[r],2)){
                ans.push_back(pow(nums[l],2));
                l++;
            }else{
                ans.push_back(pow(nums[r],2));
                r--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};