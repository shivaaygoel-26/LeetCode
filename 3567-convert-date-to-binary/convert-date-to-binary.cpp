class Solution {
public:
    string convertDateToBinary(string date) {
        string ans = "";
        string temp = "";

        for (int i = 0; i <= date.size(); i++) {
            if (i == date.size() || date[i] == '-') {
                int num = stoi(temp);
                string binary = "";

                while (num > 0) {
                    binary = char('0' + num % 2) + binary;
                    num /= 2;
                }

                if (binary.empty()) binary = "0";

                if (!ans.empty()) ans += "-";
                ans += binary;

                temp = "";
            } 
            else {
                temp += date[i];
            }
        }

        return ans;
    }
};