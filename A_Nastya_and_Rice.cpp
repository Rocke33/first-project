#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n,a,b,c,d; cin>>n>>a>>b>>c>>d;
  int low = n * (a - b), high = n * (a + b);
  if( ( low > c+d) ||  (high < c-d)) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}