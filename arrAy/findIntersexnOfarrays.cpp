#include<bits/stdc++.h>
using namespace std;

void interSection(int*arr1,int*arr2,int size1, int size2){
    for(int i=0 ; i<size1 ; i++){
        int element = arr1[i];

        for(int j=0; j<size2 ;j++){
            if(element == arr2[j]){
                int op = element;
                cout << op << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[4]= {2,3,4,5};
    interSection(arr,arr2,5,4);

    return 0;
}