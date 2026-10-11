
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void shift(vector<int>& arr, int left, int right) {
        // Base case
        if (left >= right) {
            return;
        }

        // Swap the elements
        swap(arr[left], arr[right]);

        // Recursive call
        shift(arr, left + 1, right - 1);
    }

    void reverseArraySection(vector<int>& arr, int left, int right) {
        shift(arr, left, right);
    }
};
