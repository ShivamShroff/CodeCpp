#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start = 0;
    int end = n-1; 
    int mid = start + (end-start) /2 ;
    
    while(start<=end){
        if(arr[mid] == key)
        {
          return mid;
        }
        
        if(arr[mid]>key){
            end = mid-1; 
        }
        else{
            start = mid +1;
        }
        mid = start + (end-start) /2 ;
    }
    return -1;
}

int main(){
    int arr[5] ={1,2,3,4,6};
    int size = 5;
    cout << "index of 6  is" << binarySearch(arr,size,6);
    
    return 0;
}
