#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(a[j]-a[i]==j-i) count++;
        }
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}