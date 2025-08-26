#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int prod=a[0]+1;
    for(int i=1;i<n;i++){
           prod=prod*a[i];
    }
    cout<<prod<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}