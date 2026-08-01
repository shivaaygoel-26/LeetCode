class Solution {
public:
    bool isPalindrome(int x) {
       int original=x;
        long long res=0,temp=0;
        while(x>0){
         temp=x%10;
            x=x/10;
            res=res*10+temp;
        }
        if(res==original){
            return true;
        }
        return false;
    }
};