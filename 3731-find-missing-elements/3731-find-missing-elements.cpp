class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int min=nums[0],max=nums[nums.size()-1];
      int freq[101]={0};
      vector<int>ans;
      for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
      }

      for(int i=min;i<=max;i++){
if(freq[i]==0){
ans.push_back(i);
}
      }
     
     return ans;
    }
};