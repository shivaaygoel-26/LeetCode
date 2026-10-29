class Solution {
public:
    int minSwaps(string s) {
     int i=0;
     int j=s.size()-1;
     int cat=0;
     int count=0;
     int m=0;
     while(i<s.size()){
        if(s[i]=='['){
            count++;
        }else{
            cat++;
        }
        if(cat>count){
            m++;
            count++;
            cat--;
            s[i]='[';
           while(j > i && s[j] == '['){
                j--;
            }
            s[j]=']';
        }
        
      i++;
     }
      return m;
    }
};