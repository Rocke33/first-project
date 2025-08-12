#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
cin>>n;
if(n%4 != 0) cout<<"NO"<<endl;
else{
    cout<<"YES"<<endl;
    int i=2;
    int x=n/2;
    while(x--){
        cout<<i<<" ";
        i+=2;
    }
    x=n/2-1;
    i=1;
    while(x--){
       cout<<i<<" ";
       i+=2;
    }
    cout<<i+n/2;
    cout<<endl;
}
}
    return 0;
}