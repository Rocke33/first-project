#include <bits/stdc++.h>
using namespace std;

void rocke() {
    long long int a, b, n; cin >> a >> b >> n;
    vector<long long int>x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    long long int i=0,s=0,c=b;
    while(c!=0 && i<n){
       if(c>1){
        s=s+c-1;
        c=1;
       }
       c=min(c+x[i],a);
       c--;i++;
    }
    cout<<s+c+i<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}