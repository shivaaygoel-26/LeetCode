class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>n;
        sort(nums.begin(),nums.end());
        int target=1;
        for(int i=0;i<nums.size();i++){
if(nums[i]==target){
    target++;
}else if(nums[i]<target){
    continue;
}
else{
   while (target<nums[i]){
        n.push_back(target);
        target++;
    }
    target ++;
}
        }
         while (target <= nums.size()) {
            n.push_back(target);
            target++;
    }
    return n;
    }
};