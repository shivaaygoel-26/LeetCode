class Solution {
public:
    bool checkGoodInteger(int n) {
        int ds=0;
        int sqs=0;
        while(n>0){
            ds+=n%10;
            sqs+=pow(n%10,2);
            n=n/10;
        }
        
            return sqs-ds>=50;
        
    }
};