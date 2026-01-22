#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=1;i<n-1;i++) {
        if(v[0]!=v[i] && v[n-1]!=v[i]) cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
    int t=1;
    
    while (t--) {
        rocke();
    }
    return 0;
}