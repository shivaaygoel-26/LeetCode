class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> mrg;
for (int i = 0; i < m; i++) {
    mrg.push_back(nums1[i]);
}
for (int i = 0; i < n; i++) {
    mrg.push_back(nums2[i]);
}
sort(mrg.begin(), mrg.end());
 for (int i = 0; i < m + n; i++) {
            nums1[i] = mrg[i];
 }
    }
};