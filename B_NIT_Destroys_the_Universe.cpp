#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n; cin>>n;
  vector<int> v(n);
  bool all_zero=true;
  for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]!=0) all_zero=false;
  }
  if(all_zero){
      cout<<0<<endl;
      return;
  }
  if(n==1){
    cout<<1<<endl;
    return;
  }
  int cnt=0;
  if(v[0]==0){
    for(int i=0;i<n-1;i++){
    if(v[i]==0 && v[i+1]!=0) cnt++;
    if(cnt>1){
        cout<<2<<endl;
        return;
    }
}
  }
  
    else{
        cnt++;
        for(int i=0;i<n-1;i++){
            if(v[i]==0 && v[i+1]!=0) cnt++;
            if(cnt>1){
                cout<<2<<endl;
                return;
            }
        }
    }
    cout<<cnt<<endl; 

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}