#include<bits/stdc++.h>
using namespace std;
void rocke(){
    int x,y,n;
    cin>>x>>y>>n;
    int rem=n%x;
     if(rem==y) cout<<n<<endl;
      else if(rem>y) cout<<n-(rem-y)<<endl;
      //else cout<<n - ((n - y) % x);
    cout<<n<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    rocke();
   }
    return 0;
}