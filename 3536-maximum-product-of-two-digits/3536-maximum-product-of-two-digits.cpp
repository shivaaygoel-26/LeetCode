class Solution {
public:
    int maxProduct(int n) {
   int digit, largest2=0,largest=0;
    while (n>0){
        digit=n%10;
        n=n/10;
        if(digit>largest){
            largest2=largest;
            largest=digit;
        }
        else if(digit>largest2){
        largest2=digit;}
    }
    return largest2*largest;
    }
};