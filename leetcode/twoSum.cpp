#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    // Sort the array to make it easier to find pairs
    sort(arr.begin(), arr.end());
    
    vector<vector<int>> result;
    int n = arr.size();
    int i = 0, j = n - 1;
    
    while (i < j) {
        int sum = arr[i] + arr[j];
        
        if (sum == s) {
            result.push_back({arr[i], arr[j]});
            i++;
            j--;
        } else if (sum < s) {
            i++;
        } else {
            j--;
        }
    }
    
    return result;
}


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    unordered_map<int, int> seen;
    vector<vector<int>> result;

    for (int num : arr) {
        int complement = s - num;
        if (seen[complement] > 0) { // If the complement exists in the map
            result.push_back({min(num, complement), max(num, complement)});
            seen[complement]--;  // Decrement to avoid re-using the same element
        } else {
            seen[num]++;  // Add the current element to the map
        }
    }

    // Sort result to have pairs in a consistent order
    sort(result.begin(), result.end());
    return result;
}
