#include<bits/stdc++.h>
using namespace std;

int preSuffSum(vector<int>&v){
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
    }
    int preSum = 0;
    for(int i=0; i<v.size(); i++){
        preSum += v[i];
        int sufSum = sum - preSum;
        if(preSum == sufSum){
            cout <<"presum and sufSum is "<< preSum <<"+"<< sufSum <<"="<< sum <<endl;
           
            return i;
        }
    }
    return false;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }
    cout << preSuffSum(v);

    return 0;
}
