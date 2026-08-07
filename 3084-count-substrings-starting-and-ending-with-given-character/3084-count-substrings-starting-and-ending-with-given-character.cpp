class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long substr=0,count=0;
        for(int i=0;i<s.size();i++){
        if(s[i]==c){
            count++;
            substr+=count;
        } 
        
    }
    return substr;
    }
};