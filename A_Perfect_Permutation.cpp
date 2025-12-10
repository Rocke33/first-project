#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n; cin>>n;
   if(n%2==1){cout<<-1<<endl; return;}
   int ans=2;
   for(int i=1;i<=n/2;i++){
      cout<<ans<<" "<<ans-1<<" ";
      ans+=2;
   }
   cout<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}