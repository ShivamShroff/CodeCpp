#include <bits/stdc++.h>
using namespace std;

int elementTwice(int arr[], int n) {
    int ans = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    // XOR with numbers 1 through n-1 (assuming numbers start from 1)
    for (int i = 1; i < n; i++) {
        ans = ans ^ i;
    }

    return ans;  // The result is the duplicate number
}

int main() {
    int arr[] = {1, 1, 2, 3, 4}; // Example with one duplicate
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Duplicate element: " << elementTwice(arr, n) << endl;

    return 0;
}
