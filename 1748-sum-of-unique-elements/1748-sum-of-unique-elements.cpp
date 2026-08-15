class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int sum=0;
        for(int i=0;i<mp.size();i++){
            if(mp[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};