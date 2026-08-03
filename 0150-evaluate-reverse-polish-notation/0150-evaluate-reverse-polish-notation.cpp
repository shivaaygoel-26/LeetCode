class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            }
            else {
                int x1 = st.top();
                st.pop();
          int x2 = st.top();
                st.pop();
                int res = 0;
                if (tokens[i] == "+")
           res = x2 + x1;
                else if (tokens[i] == "-")
            res = x2 - x1;
                else if (tokens[i] == "*")
             res = x2 * x1;
                else
                    res = x2 / x1;
                st.push(res);
            }
        }
        return st.top();
    }
};