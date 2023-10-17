 #include "bits/stdc++.h"
 using namespace std;
  int rows = 1;
  int temp = 0;
    int completeRows(int n) {
        // code here
       
        if(n>rows){ //base case
            n = n-rows;
            temp++;
            rows++;
            completeRows(n);
        }
        return temp;
    }
int main(){
    cout<<completeRows(8);
    return 0;
}