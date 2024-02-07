#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string s1, string s2){
    //take two vectors of size 128(total string size)
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    //check both strings size are same or not
    if(s1.size() != s2.size()){
        return false;
    }
    for(int i=0; i<s1.size(); i++){ 
        if(v1[s1[i]] != v2[s2[i]]){ //checks at both vector indexes 
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;  //insert ith(index) value at both vector
    }
    return true;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(isomorphic(s1,s2)){
        cout << "It is isomorphic" << endl;
    }
    else{
        cout << "It is Not Isomorphic";
    }
    return 0;
}