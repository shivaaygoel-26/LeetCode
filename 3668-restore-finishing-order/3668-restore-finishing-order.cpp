class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>res;
        unordered_set<int>st;
        for(int num:friends){
            st.insert(num);
        }
          for(int i=0;i<order.size();i++){
            if(st.find(order[i])!=st.end()){
                res.push_back(order[i]);
            }
        }
        return res;
    }
};