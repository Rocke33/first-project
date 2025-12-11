#include <bits/stdc++.h>
using namespace std;

void rocke() {
  long long int n,b,d; cin>>n>>b>>d;
    long long int sum=0,ans=0;
    for(long long int i=0;i<n;i++){
        long long int x; cin>>x;
        if(x<=b){
            sum+=x;
            if(sum>d){
                ans++;
                sum=0;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    int t=1;
    while (t--) {
        rocke();
    }
    return 0;
}