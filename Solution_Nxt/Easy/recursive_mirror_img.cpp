
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool shift(vector<int>& arr, int left, int right) {
        // Base case
        if (left >= right) {
            return true;
        }

        // Check whether elements match
        if (arr[left] != arr[right]) {
            return false;
        }

        // Recursive call
        return shift(arr, left + 1, right - 1);
    }

    bool isMirrorImage(vector<int>& arr, int n) {
        return shift(arr, 0, n - 1);
    }
};
