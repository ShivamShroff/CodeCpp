#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int size){
for(int i = 0 ; i<size ; i+=2){
    if(i+1 < size){
        swap(arr[i],arr[i+1]);
    }
}
}

void print(int arr[],int size){

    for(int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int even[6] = {4,3,6,7,2,1};
    int odd[5] =  {1,2,3,4,5};

    swapAlternate(even,6);
    print(even,6);

    cout << endl;
    
    swapAlternate(odd,5);
    print(odd,5);
    

}
