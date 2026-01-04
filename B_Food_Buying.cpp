#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n; cin>>n;
   int ans=0;
   while(n>9){
    ans+=(n-(n%10));
     n=(n%10)+(n/10);
   }
   ans=ans+n;
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