#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,m,count=0;
    cin>>n>>m;
    if(n>m) cout<<n-m<<endl;
    else {
        while(n<m){
            count=count+m%2;
            m=m+1;
            m=m/2;
            count++;
        }
           count=count+(n-m);
           cout<<count<<endl;
    }
}

int main() {
        rocke();
    return 0;
}