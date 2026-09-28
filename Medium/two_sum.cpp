#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int original = x;
    long long reversed = 0;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    return original == reversed;
}

int main() {
    int x = 121;

    if (isPalindrome(x))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
