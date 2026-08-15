class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int freq[101] = {0};

        for (int x : bulbs) {
            freq[x]++;
        }

        vector<int> ans;
        for (int i = 1; i <= 100; i++) {
            if (freq[i] % 2 != 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};