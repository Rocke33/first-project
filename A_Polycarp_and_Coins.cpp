#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;
    cin>>n;
    if(n%3==1){
        cout<<(n/3)+1;//no of 1
        cout<<" "<<n/3<<endl;//no of 2
    }
    else if(n%3==2){
        cout<<n/3;//no of 1
        cout<<" "<<n/3+1<<endl;// no of 2
    }
    else cout<<n/3<<" "<<n/3<<endl;//no of 1 & 2
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}