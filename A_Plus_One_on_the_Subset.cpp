#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<(*max_element(a,a+n))-(*min_element(a,a+n))<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}