#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a,b,c; cin>>a>>b>>c;
    if((a+b+c)%2!=0)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}