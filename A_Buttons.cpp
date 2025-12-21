#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a,b,c; cin>>a>>b>>c;
    if(c%2==1)a++;
    if(a>b)cout<<"First"<<endl;
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