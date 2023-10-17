#include<bits/stdc++.h>
using namespace std;
    //Function to find the leaders in the array.
    vector<int> leaders(int a[], int n){
        vector<int>ans;
        ans.push_back(a[n-1]);
        int i=n-1;
        int j=i-1;
        while(i>=1 && j>=0){
            if(a[i]<=a[j]){
               ans.push_back(a[j]);
                i=j;
                j--;
            }
            else{
                j--;
            }
        }
       reverse(ans.begin(),ans.end());
        return ans;
    }