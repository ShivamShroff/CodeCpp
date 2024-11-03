#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if (arr[mid] == 1) {
            mid++;
        } 
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

// Function to read input and output results
vector<vector<int>> findSortedArrays(int testCases, vector<vector<int>>& inputs) {
    vector<vector<int>> results;

    for (int i = 0; i < testCases; i++) {
        int n = inputs[i].size();
        sort012(inputs[i].data(), n);
        results.push_back(inputs[i]);
    }

    return results;
}

void sort012(int *arr, int n) {
    // Step 1: Count the occurrences of 0s, 1s, and 2s
    int count[3] = {0}; // count[0] for 0s, count[1] for 1s, count[2] for 2s
    
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    // Step 2: Rebuild the array
    int index = 0;
    for (int i = 0; i < 3; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}