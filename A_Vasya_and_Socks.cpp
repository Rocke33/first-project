#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int m,n; cin>>m>>n;
    int days=m;
    for(int i=1;i<=days;i++){
        if(i%n==0) days++;
    }
    cout<<days<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}