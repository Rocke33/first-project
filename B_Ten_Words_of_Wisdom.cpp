#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n; cin>>n;
   int a,b;
   int ans=-1;
   int mx=-1;
   for(int i=0;i<n;i++){
    cin>>a>>b;
     if(b>mx && a<=10){
        mx=b;
        ans=i+1;
     }
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