class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
 int n=num_people;
 vector<int> c(n, 0);
 int give = 1;
int idx = 0;
while(candies > 0){
    c[idx] += min(give, candies);
    candies -= min(give, candies);
    give++;
    idx++;
    if (idx == n) {
    idx = 0;
}
}
return c;
    }
};