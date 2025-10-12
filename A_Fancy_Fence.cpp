#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a;cin>>a;
    float n=360.0/(180.0-a);
    int x=n;
    if(n==x) cout<<"YES"<<endl;
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