#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){

int arr[] = {-1,2,-1,3,2};

unordered_map<int,int>up;

for(int i = 0; i < 5; i++)
{
    up[arr[i]]++;
}
for(int i = 0; i<5; i++){
    int key = arr[i];
    auto temp = up.find(key);
    if(temp->second == 1){
        return key;
    }
}
return 0;
}



