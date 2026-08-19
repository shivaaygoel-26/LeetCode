class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
                while(nums[i]>0){
                    int temp=nums[i]%10;
                    sum2+=temp;
                    nums[i]/=10;
                
            }
        }
       return sum1-sum2;
    }
};