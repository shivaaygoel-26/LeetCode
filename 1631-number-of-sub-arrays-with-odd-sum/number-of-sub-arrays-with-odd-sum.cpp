class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long o = 0, e = 1;
        long long s = 0, c = 0;
        int m = 1e9 + 7;

        for(int x : arr) {
            s += x;

            if(s % 2 == 0) {
                c = (c + o) % m;
                e++;
            }
            else {
                c = (c + e) % m;
                o++;
            }
        }

        return c;
    }
};