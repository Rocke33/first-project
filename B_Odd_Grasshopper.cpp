#include <bits/stdc++.h>
using namespace std;

void rocke() {
   long long int x,n; cin>>x>>n;
   long long int rem=n%4;
    n=n-rem+1;
   while(rem--){
    if(x%2==0) x-=n;
    else x+=n;
    n++;
   }
   cout<<x<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}