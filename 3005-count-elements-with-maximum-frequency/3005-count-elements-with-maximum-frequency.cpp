class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>fq(101,0);
        for(auto num:nums){
            fq[num]++;
        }
        int maxi=INT_MIN;
        for(int i=0;i<fq.size();i++){
            if(fq[i]>maxi){
                maxi=fq[i];
            }
        }
        int sum=0;
        for(int i=0;i<fq.size();i++){
            if(fq[i]==maxi)
            sum+=fq[i];
        }
return sum;
    }
};