#include<iostream>
using namespace std;

int maxLength(string str,int k){
    int s=0;
    int e=0;
    int maxLength=0;
    int zero = 0;

    for(;e<str.length();e++){
        if(str[e] == '0'){
            zero++;
        }
        while(zero > k){
            if(str[s] == '0') zero--;
            s++;
        }
        maxLength = max(maxLength,(e-s)+1);
    }
    return maxLength;
}

int main() {
    string str;
    cin >> str;
    
    int k; cin>>k;

    cout << maxLength(str,k) <<endl;

    return 0;
}
