// #include <bits/stdc++.h> 


// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
//     vector<int> v1;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr1[i] == arr2[j]) {
//                 v1.push_back(arr1[i]);
//                 arr2[j] = -1; // Mark arr2[j] as used
//                 break;       // Break to prevent counting the same element multiple times
//             }
//         }
//     }

//     return v1;
// }

//count freq in arr1
//check elements in arr2
//// If num is in freqMap and its count is greater than 0
#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> result;
    unordered_map<int, int> freqMap;

    // Count frequencies in arr1
    for (int num : arr1) {
        freqMap[num]++;
    }

    // Check elements in arr2
    for (int num : arr2) {
        // If num is in freqMap and its count is greater than 0
        if (freqMap[num] > 0) {
            result.push_back(num);
            freqMap[num]--; // Decrease the count to avoid duplicates
        }
    }

    return result;
}
// After counting arr1, freqMap is: {1: 1, 2: 3, 3: 1, 4: 1} arr2 = {2,2,3,3} arr1 = {1,2,2,2,3,4}
// We then go through arr2:
// 2 → exists with count 3 in freqMap. Add 2 to result and decrement count.
// 2 → exists with count 2 in freqMap. Add 2 to result and decrement count.
// 3 → exists with count 1 in freqMap. Add 3 to result and decrement count.
// 3 → count is now 0 in freqMap, so we skip it.
// Final result: {2, 2, 3}

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>v1;
	int i=0,j=0;
	while(i < n && j < m){
		if(arr1[i] < arr2[j])
		i++;
		else if (arr1[i] > arr2[j])
		j++;
		else{
		v1.push_back(arr1[i]);
		i++;j++;
		}
	}
	return v1;
}