#include<bits/stdc++.h>
using namespace std;

void interSection(int*arr1,int*arr2,int size1, int size2){
    for(int i=0 ; i<size1 ; i++){
        int element = arr1[i];

        for(int j=0; j<size2 ;j++){
            if(element == arr2[j]){
                int op = element;
                cout << op << " ";
                arr2[j] = INT_MIN; //ensures that this element is not considered again during further iterations of the outer loop
                break;  //once a common element is found and printed, there is no need to continue searching for the same element in the arr2 array.
            }
        }
    }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[5]= {6,7,8,9,3};
    interSection(arr,arr2,5,5);

    return 0;
}