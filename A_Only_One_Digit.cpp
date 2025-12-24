#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n;
    cin>>n;
    int ans=9;
    while (n)
    {
        int digit=n%10;
        ans=min(ans,digit);
        n/=10;
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}