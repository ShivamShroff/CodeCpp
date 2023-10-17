#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maXfun(int arr[],int size){
    int max = INT_MIN;

    for(int i = 0; i<size; i++ ){
        if(arr[i] > max ){
            max = arr[i];
        }
        
    }
    // return max;
    return max;
}

int miNfun(int arr[],int size){
    int min = INT_MAX;

    for(int i = 0; i<size; i++ ){
        if(arr[i] < min ){
            min = arr[i];
        }
        
    }
    return min;

}
void totalSum(int arr[],int size){
    int sum = 0;
    for(int i =0 ; i<size ; i++){
        sum+=arr[i];
    }
    cout << "sum is "<< sum << endl;
}

int main (){
    cout << "enter size of array: ";
    int size;
    cin >> size;

    int num[100];
    for(int i=0 ; i<size ;i++ ){
        cin >> num[i];
    }
    

    cout << "minimum is" << miNfun(num,size) << endl;
    cout << "maximum is" << maXfun(num,size) << endl;  

    totalSum(num,size); 
    
  return 0;  
}