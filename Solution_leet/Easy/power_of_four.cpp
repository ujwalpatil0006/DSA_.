//https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0){
            return false;
        }
        for (int i=0;i<=32;i++){
            if(pow(4,i)==n){
                return true;
            }
        }
        return false;
    }
};
