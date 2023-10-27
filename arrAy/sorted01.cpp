#include<bits/stdc++.h>
#include<vector>
using namespace std;

// void sortingOneAndZero(vector<int>&v){
//     int noOfzero = 0;

//     for(int ele:v){
//         if(ele == 0)
//             noOfzero++;
//     }

//     for(int i=0; i<v.size(); i++){
//         if(i < noOfzero)
//         v[i] = 0;
//         else{
//             v[i] = 1;
//         }
//     }
// }

// two pointer approach

void sortingOneAndZero(vector<int>&v){
    int leftPoi = 0;
    int rightPoi = v.size()-1;

    while(leftPoi<rightPoi){
        if(v[leftPoi] == 1 && v[rightPoi] == 0){
            v[leftPoi] = 0;
            v[rightPoi] = 1;
        }

        if(v[leftPoi] == 0)
            leftPoi++;
        
        if(v[rightPoi] == 1)
            rightPoi--;
    }
    return;
}


int main(){
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int element; cin >> element;
        v.push_back(element);
    }

    sortingOneAndZero(v);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }cout << endl;
    return 0;
}