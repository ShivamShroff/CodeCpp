#include<bits/stdc++.h>
using namespace std;


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