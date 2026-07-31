class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int count=1;
        if(s[0])
        for(int i=0;i<s.size()-1;i++){
 if(s[i]==s[i+1]){
    count ++;
 }else{
   if(count ==k){
    return true;
   }
   count=1;
 }

        }
        return count==k;
    }
};