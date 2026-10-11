#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    bool helper(int left, int right, string s, bool used) {

        // Base case
        if (left >= right) {
            return true;
        }

        // Characters match
        if (s[left] == s[right]) {
            return helper(left + 1, right - 1, s, used);
        }

        // Mismatch after already using the swap
        if (used) {
            return false;
        }

        // Try swapping left character with another character
        for (int i = left + 1; i <= right; i++) {

            swap(s[left], s[i]);

            if (helper(left + 1, right - 1, s, true)) {
                return true;
            }

            // Undo swap
            swap(s[left], s[i]);
        }

        // Try swapping right character with another character
        for (int i = left; i < right; i++) {

            swap(s[right], s[i]);

            if (helper(left + 1, right - 1, s, true)) {
                return true;
            }

            // Undo swap
            swap(s[right], s[i]);
        }

        return false;
    }
    
    bool canBecomePalindrome(string s) {
        return helper(0, s.size() - 1, s, false);
    }
};
