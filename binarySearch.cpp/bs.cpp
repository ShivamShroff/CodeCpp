#include<iostream>
#include<algorithm>
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
    int size =5;
    int arr[size];
    cout<<"give input in  a ascending order"<<endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    sort(arr,arr+size);
    cout << "index of 6  is" << binarySearch(arr,size,5);
    
    return 0;
}

