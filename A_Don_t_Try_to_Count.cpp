#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,m;cin>>n>>m;
    string x,s;cin>>x>>s;
    int count=0;
    for(int i=0;i<=5;i++){
        if(x.find(s)!= string::npos){
            cout<<count<<endl;
            return;
        }
        else {
            x=x+x;
            count++;
        }
    }
    cout<<-1<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}