#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a,b,c,n; cin>>a>>b>>c>>n;
    int mx=max({a,b,c});
    int gives=mx-a+mx-b+mx-c;
    int save=n-gives;
    if(save>=0 && save%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}