//move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter.


#include<bits/stdc++.h>
using namespace std;

void sortOddEven(vector<int>&v){
    int leftPtr = 0;
    int rightPtr = v.size()-1;

    while(leftPtr < rightPtr){

        if(v[leftPtr] % 2 == 1 && v[rightPtr] % 2 == 0){
            swap(v[leftPtr],v[rightPtr]);
            leftPtr++;
            rightPtr--;
        }

        if(v[leftPtr] % 2 == 0){
            leftPtr++;
        }
        if(v[rightPtr] % 2 == 1){
            rightPtr--;
        }
        
    }
    return;
}
int main(){
    int numbers;
    cin >> numbers;

    vector<int>v;

    for(int i=0; i<numbers;  i++){
        int elements; cin >> elements;
        v.push_back(elements);
    }

    sortOddEven(v);

    for(int i=0; i<numbers; i++){
        cout << v[i] <<" ";
        
    }
    cout << endl;
    return 0;
}