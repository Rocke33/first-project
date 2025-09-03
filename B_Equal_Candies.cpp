#include <bits/stdc++.h>
using namespace std;

void rocke() {
    long long int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn=*min_element(a.begin(),a.end());
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(a[i]-mn);
    }
    cout<<sum<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}