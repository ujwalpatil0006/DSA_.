#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int fp(int n) {
        if (n <= 1) return n;
        return fp(n - 1) + fp(n - 2);
    }

    int sumOfPrimeFibonacci(int n) {
        int sum = 0;

        for (int i = 2; i <= n; i++) {
            int f = fp(i);
            bool prime = true;

            for (int j = 2; j * j <= f; j++) {
                if (f % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (f >= 2 && prime) {
                sum += f;
            }
        }

        return sum;
    }
};
