#include "bits/stdc++.h"
using namespace std;

int find(vector<int>&v,vector<int>&b,int &money){

sort(v.begin(),v.end());
sort(b.begin(),b.end());

int minv=v[0];
int n=b.size()-1;
int maxb=b[n];
int minb=b[0];

int total;
if(minv>minb){
    return money;
}
else{
    int stock=money/minv;
    int rem=money%minv;

    int ans=stock*maxb;
    total=ans+rem;
}
return total;
}
int main(){
    int n,m,p;
    cin>>n>>m>>p;
    vector<int>v(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int ans=find(v,b,p);
    cout<<ans<<endl;
    return 0;
}