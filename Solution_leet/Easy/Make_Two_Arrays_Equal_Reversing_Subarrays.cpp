// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size() != arr.size()) {
            return false;
        }

        int sum = 0;
        int n = target.size();
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (target[i] == arr[j] && !visited[j]) {
                    sum++;
                    visited[j] = true;
                    break;
                }
            }
        }

        return sum == n;
    }
};
