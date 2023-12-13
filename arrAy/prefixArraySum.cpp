#include <bits/stdc++.h>
using namespace std;

// void prefixArraySum(vector<int>& input, vector<int>& prefixSum) {
//     int n = input.size();
//     prefixSum[0] = input[0];
    
//     // Compute prefix sum and store it in the prefixSum array
//     for (int i = 1; i < n; ++i) {
//         prefixSum[i] = prefixSum[i - 1] + input[i];
//     }
// }

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> input(n);
//     vector<int> prefixSum(n);
    
//     for (int i = 0; i < n; ++i) {
//         cin >> input[i];
//     }
    
//     prefixArraySum(input, prefixSum);
    
//     // Output the prefix sum array
//     cout << "Prefix sum array: ";
//     for (int i = 0; i < n; ++i) {
//         cout << prefixSum[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

void prefixSum(vector<int>&v){

    for(int i=1; i<v.size(); i++){
        v[i] += v[i-1];  //adding previous array sum by v[i-1] in v[i] new element
    }
    return;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }
    prefixSum(v);

    for(int i=0; i<n; i++){
        cout << v[i]<<" ";
    }cout << endl;
    return 0;
}
