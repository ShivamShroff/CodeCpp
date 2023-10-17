#include<bits/stdc++.h>
using namespace std;

int largestRow(int arr[][3],int r,int l){

    int max = INT_MIN;
    int maxIndex = -1;
    
    for(int i=0 ; i<3 ; i++){
        int sum = 0;
        for(int j=0 ; j<3 ; j++){
            sum += arr[i][j];
        }

        if(max < sum){
            max = sum;
            maxIndex = i;            
        }  
    }
    cout << "the largest row sum is "<< max << endl;
    return maxIndex;   
}

int main(){
    int arr[3][3];
    //taking input
    cout << "give input for 2d array"<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> arr[i][j];

        }
    }

    //printing 2d array
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    int maxIdx = largestRow(arr,3,3);
    cout << "the largest sum row is " << maxIdx << endl;
     
     return 0;
}  