#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,3,1,4,5};
    int n = 5;
    int target = 10;

    int pairs = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]+arr[j] == target)
    //         pairs++;
    //     }
    // }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k] == target)
                    pairs++;
                }
        }
    }
    
    cout << pairs ;



    return 0;
}