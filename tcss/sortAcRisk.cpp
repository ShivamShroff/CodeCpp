#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            countZero++;
        }

        if(arr[i] == 2){
            countTwo++;
        }

        if(arr[i] == 1){
            countOne++;
        }
    }   

    int i = 0;
    while(countZero > 0){
        arr[i] = 0;
        i++;
        countZero--;
    }

    
    while(countOne > 0){
        arr[i] = 1;
        i++;
        countOne--;
    }

    
    while(countTwo > 0){
        arr[i] = 2;
        i++;
        countTwo--;
    }

    for(i=0; i<n; i++){
        cout << arr[i] <<endl;
    }

    return 0;
}