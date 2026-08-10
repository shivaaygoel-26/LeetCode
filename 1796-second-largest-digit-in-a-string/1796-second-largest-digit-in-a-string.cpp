class Solution {
public:
    int secondHighest(string s) {
        int max2=-1,max1=-1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                 int digit = s[i] - '0';
            if(digit>max1){
                max2=max1;
                max1=digit;
            } else if(digit > max2 && digit != max1) {
                    max2 = digit;
                }
            } 
           
        }
        return max2;
    }
};