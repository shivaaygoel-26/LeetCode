class Solution {
public:
    int arrangeCoins(int n) {
        int stairs;
       for(int i=0;i<=n;i++){
        n=n-i;
        stairs++;
        if(n<0){
            break;
        }
       } 
       return stairs-1;
    }
};