#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    cout<<n/2<<endl;
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else {
        for(int i=0;i<n/2-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}