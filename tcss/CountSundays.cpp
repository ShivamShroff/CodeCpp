#include<bits/stdc++.h>
using namespace std;

// input -> any day from a week(monday) -> no. of days given to find no. of sundays(13)
//output -> 7 - 1 = 6(remaining days for first sunday) ------> 13 - 6 = 7 (count = 1) ----->7/7 = 1(count = 1+1= 2) 

void CountSundays(string str[],int n,string s){
    //find the remaining days for first sunday
    int i;
    for(i=0; i<n; i++){
        if(str[i] == s){
            break;
        }
    }
    int remainingDaysForSunday = 6 - i;
    int ans = 1;
    n = n - remainingDaysForSunday;
    ans += (n/7);
    cout << ans <<" " << endl;
}
int main(){
    int n; cin>>n;
    string s; cin>>s;
    string str[] = {"sunday","monday","tuesday","thursday","wednesday","friday","saturday"};

    CountSundays(str,n,s);
    return 0;
}