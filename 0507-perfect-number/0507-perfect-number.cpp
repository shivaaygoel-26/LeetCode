class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1){return false;}
      unordered_set<int>factors;
       for (int i=1;i<=num;i++){
        if(num%i==0){
            factors.insert(i);
        }
       }
        int sum = 0;
        factors.erase(num);
for(int x : factors) {
    sum += x;
}
if(sum==num){
    return true;
}
    return false;
    }
};