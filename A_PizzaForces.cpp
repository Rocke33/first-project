#include <bits/stdc++.h>
using namespace std;

void rocke() {
   long long int n; cin >> n;
   long long int ans=(n/6)*15;
   if(n<6) cout<<15<<endl;
   else if(n%6==0)cout<<ans<<endl;
   else if(n%6==1 || n%6==2)  cout<<ans+5<<endl;
    else if(n%6==3 || n%6==4)  cout<<ans+10<<endl;
    else cout<<ans+15<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}