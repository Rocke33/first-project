#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int x,y;
    vector<int>v;
    for(int i=0;i<4;i++){
        cin>>x>>y;
        v.push_back(x);
    }
    int a= *max_element(v.begin(),v.end())- *min_element(v.begin(),v.end());
    cout<<a*a<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}