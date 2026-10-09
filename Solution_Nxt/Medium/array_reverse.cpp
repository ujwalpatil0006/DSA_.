#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int a[], int n){
    if(i >= n/2){ // base condition
        return; 
    }
    swap(a[i],a[n-i-1]);
    reverse(i+1, a, n); // recursive call
}
int main() {
    int n;
    cin >> n; // 5
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];  // Input - 5 7 6 4 1
    }
    reverse(0, a, n); // calling the reverse function
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";   // Output - 1 4 6 7 5
    }
    return 0;
}
