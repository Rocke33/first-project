#include <bits/stdc++.h>
using namespace std;

void rocke() {
 int n; cin>>n;
  n--;
 vector<int> v(n);
 int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    cout<<(-1)*sum<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}