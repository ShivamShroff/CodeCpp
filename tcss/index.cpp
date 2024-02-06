
#include<bits/stdc++.h>


using namespace std;

vector<int> find_unique(int arr[], int n) {
    vector<int> ans(100, 0);
    vector<int> res;

    for (int i = 0; i < n; i++) {
        ans[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (ans[arr[i]] == 1) {
            res.push_back(arr[i]);
        }
    }

    return res;
}

void replace_with_rank(int arr[],int n){

    vector<int>temp;
    for(int i=0;i<n;i++){
        temp.push_back(arr[i]);
    }
    sort(temp.begin(),temp.end());
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==temp[j]){
                arr[i]=j+1;
            }
        }
    }

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // vector<int> result = find_unique(arr, n);

    // for (int i = 0; i < result.size(); i++) {
    //     cout << result[i] << " ";
    // }
    replace_with_rank(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
