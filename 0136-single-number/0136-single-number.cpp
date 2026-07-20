class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNumber=0;
    for(int x:nums){
        singleNumber^=x;
    }
    return singleNumber;
    }
};