//find 

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int i=0;
//         int j=nums.size()-1;
//         vector<int> ans;
        

//         while(i<nums.size()){
//             if(nums[i]==target){
//                 ans.push_back(i);
//                 break;
//             }
           
//             i++;
            
//         }
//         while(j>=0){
//              if(nums[j]==target){
//                 ans.push_back(j);
//                 break;
//             }
//             j--;
//         }
//         if(ans.size()==0){
//             ans.push_back(-1);
//             ans.push_back(-1);
//         }
//         return ans;
//     }
// };



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
    return ans;
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
    return ans;
}

int elementsize(int a, int b){
    int c = a-b+1;
    return c;
}

int main(){
    int size =5;
    int arr[size];
    cout<<"give input in ascending order"<<endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    sort(arr,arr+size);
    int a =  FirstHalf(arr,size,2);
    int b = SecondHalf(arr,size,2);
    cout << a <<"and" << b << endl;;

    cout << elementsize(a,b);
    
    return 0;
}

