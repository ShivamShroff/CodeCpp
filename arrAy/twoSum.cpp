#include<iostream>
using namespace std;


int twoSum(int arr[],int n,int x){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(x-arr[i]==arr[j])
            cout << arr[i] <<"and"<< arr[j] << endl;

        }

    }
}

int main(){
    int arr[] = {2,6,5,8,11};
    twoSum(arr,5,14);
    return 0;
    
}