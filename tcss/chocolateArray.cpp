#include <bits/stdc++.h>
using namespace std;

// input -> 1 2 0 1 0
//output -> 1 2 1 0 0

void pushZeroLast(int arr[],int n){
    int count = 0; //it will clear your confusion
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    for(int i=count; i<n; i++){
        arr[i] = 0;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    pushZeroLast(arr,n);

    return 0;

}