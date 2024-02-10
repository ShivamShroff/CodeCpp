#include<bits/stdc++.h>
using namespace std;
/*
string longCommPrefix(vector<string> &s){
    //sort the string 
    sort(s.begin(),s.end());
    //string at first and last idx will be most different
    string s1 = s[0];  
    string s2 = s[s.size()-1];
    string ans ="";
    int i=0,j=0;

    while(i<s1.size() && j<s2.size()){
        if(s1[i] == s2[j]){
            ans+=s1[i];
            i++;j++;
        }
        else{
            break;
        }

    }
    return ans;
}
*/

string longCommPrefix(vector<string>str){
    string str1 = str[0];
    string ans ="";
    int j=0;
    for(int i=0; i<str.size(); i++){
        while(j<str1.size() && j<str[i].size() && str1[j] == str[i][j]){
            ans = str1.substr(0,j);
            j++;
        }
    }
    
    return ans;

}
//at O(1)

int main(){
    int size;
    cout << "enter no. of strings"<< endl;
    cin >> size;

    cout << "enter "<<size<<" strings"<<endl;
    vector<string>s(size);
    for(int i=0; i<size; i++){
        cin >> s[i];
    }
    cout << "longest common prefix is "<< longCommPrefix(s);

    return 0;
}

//takes O(nlogn)  for sorting of strings or integer  * n (for comparin n strings)
//ignore while loop 