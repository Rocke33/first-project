#include <bits/stdc++.h>
using namespace std;

void rocke() {
     int n;cin>>n;
    long long int k=2;
    while(n % ((1<<k)-1) !=0){
          k++;
    }
    cout<<n/((1<<k)-1)<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}