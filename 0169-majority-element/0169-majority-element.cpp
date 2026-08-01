class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>freq;
       for(auto x:nums){
        freq[x]++;
       }
       int ans;
int maxi = 0;

for(auto x : freq){
    if(x.second > maxi){
        maxi = x.second;
        ans = x.first;
    }
}
return ans;
    }
};