#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll l,r,a,x; cin>>l>>r>>a;
  x=r-(r%a)-1;
  if(x<l || a<=2 || x%a==r%a) x=r;
  cout<<x/a+x%a<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}