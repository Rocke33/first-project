#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n; cin>>n;
   vector<int> v(n);
   set<int> s;
   for(int i=0;i<n;i++){
    cin>>v[i];
    s.insert(v[i]);
   }
   if(s.size()==1) cout<<"Yes"<<endl;
   else if(s.size()==2){
    auto it=s.begin();
    int first=*it;
     int cnt1st=count(v.begin(),v.end(),first);
        int cnt2nd=abs(n-cnt1st);
        if(cnt1st==n/2 || cnt2nd==n/2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
   }
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