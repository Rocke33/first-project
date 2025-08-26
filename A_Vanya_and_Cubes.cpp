#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;
    cin>>n;
    int totalcube=0;
    int newcube=0;
    int i=1;
    while(totalcube<=n){
         newcube+=i;
         totalcube+=newcube;
         i++;
    }
    cout<<i-2<<endl;
}

int main() {
        rocke();
    return 0;
}