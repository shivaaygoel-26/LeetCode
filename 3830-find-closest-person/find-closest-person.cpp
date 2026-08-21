class Solution {
public:
    int findClosest(int x, int y, int z) {
        int stepx=abs(z-x),stepy=abs(z-y);
        if(stepx>stepy){
            return 2;
        }else if(stepy>stepx){
            return 1;
        }
        return 0;
    }
};