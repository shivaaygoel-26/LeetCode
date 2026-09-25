class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        int maxi = 0;
        string ans = "";

        for(int i = 0; i < n; i++) {

            for(int j = n - 1; j >= i; j--) {

                int l = i;
                int r = j;
                bool palindrome = true;

                while(l < r) {
                    if(s[l] != s[r]) {
                        palindrome = false;
                        break;
                    }

                    l++;
                    r--;
                }

                if(palindrome) {
                    if(j - i + 1 > maxi) {
                        maxi = j - i + 1;
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }

        return ans;
    }
};