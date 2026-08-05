class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
int sign = 1;

while (n > 0) {
    ans += (n % 10) * sign;
    sign *= -1;
    n /= 10;
}

if (sign == 1)
    ans = -ans;

return ans;
    }
};