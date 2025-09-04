#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>u;
    for(int i=0;i<n;i++){
        u.insert(a[i]);
    }
    if(u.size()==n) cout<<"YES"<<endl;
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