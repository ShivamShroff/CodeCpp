#include <iostream>
#include <limits.h>

using namespace std;

// input -> 7 8 6 5 4
// output -> 2  (first element for sure counted and then 8 is greater than 7)

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = INT_MIN;
    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            count++;
            max = arr[i];
        }
    }

    cout << count << endl;

    return 0;
}
