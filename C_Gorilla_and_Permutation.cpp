#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,m,k; cin>>n>>m>>k;
    int l_first=n-m;
    for(int i=0;i<l_first;i++){
        cout<<n-i<<" ";
    }
    for(int i=1;i<=m;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}