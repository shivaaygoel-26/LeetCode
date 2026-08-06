class Solution {
public:
int reverseNum(int num){
    int rev=0;
     while(num>0){
            rev=rev*10+num%10;
            num=num/10;
        }
        return rev;
}
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        int first = reverseNum(num);
        int second = reverseNum(first);
        return second == num;
       
    }
};