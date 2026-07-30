class Solution {
public:
    int minimumPushes(string word) {
        int remaining = word.size();
        int push = 1;
        int ans = 0;
        while (remaining > 0) {
            int take = min(8, remaining);
            ans += take * push;
            remaining -= take;
            push++;
        }
        return ans;
    }
};