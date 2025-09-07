#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    int div=n/2020;
    int rem=n%2020;
    if(rem>div) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}