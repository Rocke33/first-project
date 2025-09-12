#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,x; cin>>n>>x;
    if(n<=2) {
        cout<<1<<endl;
        return;
    }
    n=n-2;
    cout<<ceil((double)n/x)+1<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}