#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2){
    //storing frequency of both the strings in one array
    vector<int>main(26,0);     // size is 26 (frequency)

    if(s1.length() != s2.length()){
        return false;
    }
    for(int i=0; i<s1.length(); i++){
        main[s1[i]-'a']++;
        main[s2[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(main[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cout << "enter first string"<<endl;
    cin >> s1;
    cout << "enter second one"<<endl;
    cin >> s2;
    if(anagram(s1,s2)){
        cout << "Yes! it is "<< endl;
    }
    else{
        cout << "Nhh! it is not "<< endl;
    }

    return 0;
}


