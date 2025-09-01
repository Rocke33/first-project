#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,k,flag=0;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(is_sorted(a.begin(),a.end()) || k!=1){
        cout<<"YES"<<endl;
    }
    else  cout<<"NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}