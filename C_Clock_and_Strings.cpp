#include <bits/stdc++.h>
using namespace std;
void rocke() {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   string s="";
   for(int i=1;i<=12;i++){
    if(i==a || i==b) s=s+"x";
    else if(i==c || i==d) s=s+"y";
   }
   if(s=="xyxy" || s=="yxyx"){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}