#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,m;cin>>n>>m;
    int a[n];
    int cack=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cack += (a[i]*m);
    }
    cout<<cack<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}