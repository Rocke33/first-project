#include <bits/stdc++.h>
using namespace std;

void rocke() {
   
   int n,t; cin>>n>>t;
   string s;
   s=1;
   if(t==10 ||t==5 && n>1){
    cout<<1;
    for(int i=1;i<n;i++){
           cout<<0;
    }
   }
   
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}