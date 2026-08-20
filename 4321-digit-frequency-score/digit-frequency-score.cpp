class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>freq(10,0);
        while(n>0){
            int temp=n%10;
            freq[temp]++;
            n/=10;
        }
        int sum=0;
        for(int i=0;i<freq.size();i++){
            sum+=(freq[i]*i);
        }
        return sum;
    }
};