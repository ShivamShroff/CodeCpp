// //return an array of the square of each number sorted in ascending/non-decreasing order

// #include<bits/stdc++.h>
// using namespace std;

// void sortedSquareArray(vector<int>&v){
//     int leftPtr = 0;
//     int rightPtr = v.size()-1;
//     vector<int>main;

//     while(leftPtr<=rightPtr){
//         if(abs(v[leftPtr]) < abs(v[rightPtr])){
//             main.push_back(v[rightPtr] * v[rightPtr]);
//             rightPtr--;
//         }
//         else{
//             main.push_back(v[leftPtr]*v[rightPtr]);
//             leftPtr++;
//         }
//     }

//     reverse(main.begin(),main.end());

//     for(int i=0; i<main.size(); i++){
//         cout << main[i] << " ";
//     }
//     cout << endl;


// }
// int main(){
//    int n; cin >> n;
//    vector<int>v;
//    for(int i=0; i<n; i++){
//     int elements; cin>>elements;
//     v.push_back(elements);
//    }
//    sortedSquareArray(v);
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedSquareArray(vector<int>& v) {
    int leftPtr = 0;
    int rightPtr = v.size() - 1;
    vector<int> main;

    while (leftPtr <= rightPtr) {
        int leftSquare = v[leftPtr] * v[leftPtr];
        int rightSquare = v[rightPtr] * v[rightPtr];

        if (leftSquare < rightSquare) {
            main.push_back(rightSquare);
            rightPtr--;
        } else {
            main.push_back(leftSquare);
            leftPtr++;
        }
    }

    reverse(main.begin(), main.end());

    for (int i = 0; i < main.size(); i++) {
        cout << main[i] << " ";
    }
    cout << endl;
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
    sortedSquareArray(v);
    return 0;
}
