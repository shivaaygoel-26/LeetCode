class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int mindiff = arr[1] - arr[0];

        for(int i = 1; i < arr.size(); i++) {
            mindiff = min(mindiff, arr[i] - arr[i-1]);
        }

        vector<vector<int>> ans;

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] - arr[i-1] == mindiff) {
                ans.push_back({arr[i-1], arr[i]});
            }
        }

        return ans;
    }
};