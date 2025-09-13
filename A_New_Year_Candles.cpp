#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int a,b; cin>>a>>b;
    int hour=a;
    while(a/b){
        hour=hour+a/b;
        a=a/b+(a%b);
    }
    cout<<hour<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}