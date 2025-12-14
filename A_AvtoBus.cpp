#include <bits/stdc++.h>
using namespace std;

void rocke() {
   long long int n; cin>>n;
   if(n==2 || n%2==1){cout<<-1<<endl; return;}
   if(n%6==0){cout<<n/6<<" "<<n/4<<endl; return;}
   else{
       cout<<1+(n/6)<<" "<<n/4<<endl;
   }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}