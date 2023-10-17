// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int size;  //array size
//     cin >> size;

//     int arr[size]; //taking array 
//     for(int i = 0; i<size; i++){
//         cin >> arr[i];
//     }

// //precompute
//     // int hash[4] = {0};
//     // for(int i=0; i<size; i++){
//     //     hash[arr[i]] ++;
//     // }
//    map<int,int>mp;
   
//     int q; //no. of elements to search
//     cin >> q;

//     while(q--){
//         int t;
//         cin >> t;
        
//         //fetching
//         cout << hash[t] << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}