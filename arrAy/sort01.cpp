#include<bits/stdc++.h>
using namespace std;

int sort01(int arr[],int s){
int begin = 0;
int end = s-1;
while(begin<end){
    // if(arr[begin]=0){
    //     begin++;
    // }
    // if(arr[end]=1){
    //     end--;
    // }
    while(arr[begin] == 0 ){
        begin++;
    }
    while(arr[end] == 1 ){
        end--;
    }

    //if u r here that means 
    //arr[left]==1 and arr[right]==0
    
        swap(arr[begin],arr[end]);
        begin++;
        end--;
    

}
}

void printArray(int arr[],int s){
    for(int i=0; i<s; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {1,0,1,1,0,0,0,0,1,1};
    sort01(arr,10); 
    printArray(arr,10);
    
    return 0;
}