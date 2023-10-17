#include<bits/stdc++.h>
using namespace std;

void reVerse(int arr[],int size){
    int startIdx = 0;
    int endIdx =size-1;

    while(startIdx <= endIdx){
        swap(arr[startIdx],arr[endIdx]);
        startIdx++;
        endIdx--;
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reVerse(arr, 6);
    reVerse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}