#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a,b;
    cin>>a>>b;
    if(2*a<b)cout<<b*b<<endl;
   else if(2*b<a)cout<<a*a<<endl;
    else if(a>b)cout<<4*b*b<<endl;
    else cout<<4*a*a<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}