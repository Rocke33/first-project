#include <bits/stdc++.h>
using namespace std;

void rocke() {
   long long int n; cin>>n;
   long long int i=1;
   while (n%i==0)
   {
    i++;
   }
    cout<<i-1<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}