#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(key == arr[i]){
            return true;
        }

    }
    return false;
}

int main(){
    int arr[] = {12,23,32,4,3};
    int key;
    
    cout << "enter the required key "<< endl;
    cin >> key;

    int found = linearSearch(arr,key,10);

    if(found)
        cout << "key is present"<<endl;    
    else
        cout<<"key is absent";

}