#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int ct2=0,ct3=0;
    while(n%2==0){
        n=n/2;
        ++ct2;
    }
    while(n%3==0){
        n=n/3;
        ++ct3;
    }
    if(n!=1 ||ct2 > ct3 ) cout<<-1<<endl;
    else{
        cout<<2*ct3-ct2<<endl;
    }
 }
    return 0;
}