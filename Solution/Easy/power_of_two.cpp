//link :- https://leetcode.com/problems/power-of-two/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        for (int i = 0; i <= 30; i++) {
            if (pow(2, i) == n) {
                return true;
            }
        }

        return false;
    }
};
