#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int>u;
    
    int breking=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]>k) breking=i;
    }
    cout<<breking<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}