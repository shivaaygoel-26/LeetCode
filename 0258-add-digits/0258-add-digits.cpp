class Solution {
public:
    int addDigits(int num) {
     int temp;
     while(num>=10){
        int sum=0;
     while(num>0){
        temp=num%10;
        sum+=temp;
        num=num/10;
     }   
     num=sum;
     }
     return num;
    }
};