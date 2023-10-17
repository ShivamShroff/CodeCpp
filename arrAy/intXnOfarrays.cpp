#include<bits/stdc++.h>
using namespace std;

void findingIntsxn(int*arr,int*arr2,int size,int size2){
    int i = 0 ; int j = 0;
    while(arr[i]<size && arr2[j]<size2){
        if(arr[i] == arr2[j]){
            cout << arr[i] <<" ";
            i++;
            j++;
        }
        else if(arr[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[4]= {2,3,4,5};
    findingIntsxn(arr,arr2,5,4);

    return 0;
}