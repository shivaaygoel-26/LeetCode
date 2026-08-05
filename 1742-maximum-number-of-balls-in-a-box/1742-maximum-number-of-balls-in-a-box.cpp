class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
       unordered_map<int, int> freq;
int ans = 0;

for (int i = lowLimit; i <= highLimit; i++) {
    int num = i;
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    freq[sum]++;
    ans = max(ans, freq[sum]);
}
return ans;
    }
};