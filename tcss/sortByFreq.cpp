#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    // Compare frequencies, and if frequencies are equal, compare values
    return (a.second > b.second) || (a.second == b.second && a.first < b.first);
}

void sortByFrequency(int arr[], int n) {
    // Create a frequency map
    unordered_map<int, int> freqMap;

    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Create a vector of pairs to store elements and their frequencies
    vector<pair<int, int>> freqVec;

    for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
        freqVec.push_back({it->first, it->second});
    }

    // Sort the vector using the custom compare function
    sort(freqVec.begin(), freqVec.end(), compare);

    // Print the sorted array by frequency
    for (auto it = freqVec.begin(); it != freqVec.end(); it++) {
        int element = it->first;
        int frequency = it->second;

        for (int i = 0; i < frequency; i++) {
            cout << element << " ";
        }
    }
}

int main() {
    int N1 = 8;
    int array1[] = {1, 2, 3, 2, 4, 3, 1, 2};
    sortByFrequency(array1, N1);
    cout << endl;

    // int N2 = 6;
    // int array2[] = {-199, 6, 7, -199, 3, 5};
    // sortByFrequency(array2, N2);
    // cout << endl;

    return 0;
}
