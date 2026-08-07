class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int i=0;
        while(s[i]!='\0'){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
                i++;
            }else{
                st.push(s[i]);
                i++;
            }
        }
        string ans = ""; 
        while(!st.empty()) { 
            ans += st.top(); 
            st.pop();
             }
            
             reverse(ans.begin(), ans.end()); 
        return ans;
        
    }
};