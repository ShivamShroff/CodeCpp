#include<bits/stdc++.h>
using namespace std;

//finding pair sum in a sorted array
void PairSum(vector<int>& arr, int Sum) {
  int left = 0;
  int right = arr.size() - 1;

  while (left < right) {
    int sum = arr[left] + arr[right];

    if (sum == Sum) {
      cout << "Pair found: " << arr[left] << " + " << arr[right] << " = " << Sum << endl;
      return;
    } else if (sum < Sum) {
      left++;
    } else {
      right--;
    }
  }

  cout << "No pair found with sum " << Sum << " in the array." << endl;
}

int main() {
  vector<int> Arr = {1, 32, 4, 16, 8, 10};
  int Sum = 36;

  PairSum(Arr, Sum);

  return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// void pairSum(vector<int> &arr, int s){
//     vector<vector<int>>result;

//     for(int i = 0; i<arr.size() ; i++)
//     {
//         for(int j = i+1; j<arr.size(); j++){
//             if(arr[i]+arr[j] == s){
//                 vector<int> temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                 temp.push_back(max(arr[i],arr[j]));
//                 result.push_back(temp);
//             }
//         }
//     }

//     for(int i=0;i<5;i++){
//         for(int i=0;i<5;i++){
//             cout<<result[i]<<" ";
//         }
//     }
// }

// int main(){
//     // int arr[5] = {3,4,5,9,6};
//     vector<int>pnpn=[1,2,3,4,5];

//     pairSum(pnpn,5);
    
    
// return 0;
// }