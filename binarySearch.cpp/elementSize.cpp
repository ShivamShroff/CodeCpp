#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int FirstHalf(int arr[],int n, int key){
    int start = 0;
    int end = n-1; 
    int ans = -1;
    int mid = start + (end-start) /2 ;
    
    while(start<=end){
        if(arr[mid] == key)
        {
          ans = mid;  
          end = mid-1;
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

int SecondHalf(int arr[],int n, int key){
    int start = 0;
    int end = n-1; 
    int ans = -1;
    int mid = start + (end-start) /2 ;
    
    while(start<=end){
        if(arr[mid] == key)
        {
          ans = mid;  
          start = mid +1;
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
    cout<<"give input in ascending order"<<endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    sort(arr,arr+size);
    cout << FirstHalf(arr,size,5);
    cout << SecondHalf(arr,size,5);
    
    return 0;
}

