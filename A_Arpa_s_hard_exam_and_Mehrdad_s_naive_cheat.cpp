#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    if(n==0) cout<<1;
    else if(n%4==0) cout<<6;
    else if(n%4==3) cout<<2;
    else if(n%4==2) cout<<4;
    else cout<<8;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}