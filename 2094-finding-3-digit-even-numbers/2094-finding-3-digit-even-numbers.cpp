class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        map<int, int> mp;
        for (int x : digits) {
            mp[x]++;
        }
        for (int num = 100; num <= 999; num++) {
            if (num % 2 != 0)
                continue;
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;
            if (mp[a] == 0) continue;
            mp[a]--;
            if (mp[b] == 0) {
                mp[a]++;
                continue;
            }
            mp[b]--;
            if (mp[c] == 0) {
                mp[a]++;
                mp[b]++;
                continue;
            }
            mp[c]--;
            ans.push_back(num);
            mp[a]++;
            mp[b]++;
            mp[c]++;
        }
        return ans;
    }
};