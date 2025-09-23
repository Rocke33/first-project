#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;cin>>n;
    vector<int>v(n);
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sqrt(sum)==(float)sqrt(sum)) cout<<"YES"<<endl;
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