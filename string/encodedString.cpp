#include<bits/stdc++.h> 
using namespace std;  

//t.c = 0(n) lenth of decoded string
//s.c = 0(n) lenth of decoded string

string encodedStr(string str){

    string res = "";
    //traversing encoded string
    for(int i=0; i<str.length(); i++){
        if(str[i] != ']'){
            res.push_back(str[i]);
        }
        //extract string s from result
        else{
            string s="";
            while(res.back() != '[' && !res.empty() ){
                s.push_back(res.back());
                res.pop_back();
            }
            //reverse string string s
            reverse(s.begin(),s.end());
            //remove last character [
            res.pop_back();


            //extract num from result
            string num = "";
            while(!res.empty() && res.back()>='0' && res.back()<='9'){
                num.push_back(res.back());
                res.pop_back();
            }
            //reverse number
            reverse(num.begin(),num.end());
            //convert num string to int
            int int_num = stoi(num);

            while(int_num){
                res += s;
                int_num--;
            }

        }
    }
    return res;
}

int main(){
    string str;
    cin >> str;

    cout << "Here is your decoded string "<<encodedStr(str) <<endl;

    return 0;
}