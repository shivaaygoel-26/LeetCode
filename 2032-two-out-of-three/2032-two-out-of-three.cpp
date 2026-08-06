class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        unordered_map<int,int> mp;
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        set<int> s3(nums3.begin(), nums3.end());
        for(auto x : s1) mp[x]++;
        for(auto x : s2) mp[x]++;
        for(auto x : s3) mp[x]++;
        vector<int> ans;
        for(auto x : mp){
            if(x.second >= 2){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};