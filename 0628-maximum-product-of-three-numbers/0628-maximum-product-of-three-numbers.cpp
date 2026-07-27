class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int first=INT_MIN,second=INT_MIN,third=INT_MIN;
       int mini1 = INT_MAX, mini2 = INT_MAX;
       int maxp;
       for(int x:nums){
        if(x>first){
            third=second;
            second=first;
            first=x;
        }
        else if(x>second){
            third=second;
            second=x;
        }
        else if(x>third){
            third=x;
        }
        if(x<mini1){
            mini2=mini1;
            mini1=x;
        }else if(mini2>x){
            mini2=x;
        }
       }
      maxp=max((first*second*third),(mini1*mini2*first));
       return maxp;
    }
};