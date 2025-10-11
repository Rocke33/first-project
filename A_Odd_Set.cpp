#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n;
    cin>>n;
     vector<int>v(2*n);
     int even=0,odd=0;
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    if(even==odd) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}