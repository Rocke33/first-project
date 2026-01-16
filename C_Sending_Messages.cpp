#include <bits/stdc++.h>
using namespace std;

void rocke() {
    long long int n,f,a,b;cin>>n>>f>>a>>b;
    vector<long long int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long int cost_of_on=v[0];
    long long int f1=0;
    if(cost_of_on>b) f1+=b;
        else f1+=cost_of_on;
        if(f1>=f){
            cout<<"NO"<<endl;return;
        }
    for(int i=1;i<n;i++){
        cost_of_on=(v[i]-v[i-1])*a;
        if(cost_of_on>b) f1+=b;
        else f1+=cost_of_on;
        if(f1>=f){
            cout<<"NO"<<endl;return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}