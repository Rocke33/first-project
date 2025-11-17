#include <bits/stdc++.h>
using namespace std;
void rocke() {
    int n;cin>>n;
     int l=to_string(n).length();
     int count=9*(l-1);
     string one="";
     for(int i=0;i<l;i++){
         one+='1';
     }
   int ONE=stoi(one);
   count = count + (n/ONE);
   cout<<count<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}