class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;

        for (int i = left; i <= right; i++) {
            int temp = i;
            bool flag = true;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit == 0 || i % digit != 0) {
                    flag = false;
                    break;
                }
                temp = temp / 10;
            }
            if (flag) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};