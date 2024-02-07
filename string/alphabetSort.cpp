#include<bits/stdc++.h>
using namespace std;

string sorted(string s){
    vector<int>main(26,0);
    //storing frequency on main vector
    for(int i=0;i<26;i++){
        main[s[i]-'a']++;
    }
    //creating sorted array
    int j = 0;
    for(int i=0; i<26; i++){
        while(main[i]--)      //while loop for the frequency of string count
        s[j++] = i+'a';       //inserting characters for each iterations
    }
    return s;
}

int main(){
    string s;
    cout<<"enter"<<endl;
    cin >>s;

    cout << sorted(s) <<endl;
}