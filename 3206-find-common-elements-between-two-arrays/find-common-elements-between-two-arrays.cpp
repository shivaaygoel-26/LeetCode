class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
		int s1[101] = {0};

		for (int x : nums1) 
			s1[x]++;

		int s2[101] = {0};

		for (int x : nums2) 
			s2[x]++;

		int sum1 = 0, sum2 = 0;

		for (int i = 1; i <= 100; i++) {
			if (s1[i] && s2[i]) {
				sum1 += s1[i];
				sum2 += s2[i];
			}
		}

		return vector<int>({sum1, sum2});
    }
};