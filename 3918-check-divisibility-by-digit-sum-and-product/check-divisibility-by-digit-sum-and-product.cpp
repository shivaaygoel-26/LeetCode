class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int temp = n % 10;
            sum += temp;
            product *= temp;
            n /= 10;
        }
        int m=sum+product;

        return original %m == 0 ;
    }
};