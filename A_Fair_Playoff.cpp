#include <bits/stdc++.h>
using namespace std;

void rocke() {
    vector<int>a(4);
        vector<int>b(4);

 //   if((a<b && c>d) ||(a>b && d>c) )
 for(int i=0;i<4;i++){
    cin>>a[i];
    b[i]=a[i];

 }
 sort(b.begin(),b.end());
 long long sum=b[2]+b[3];
 if(a[0]+a[1]==sum||a[2]+a[3]==sum)
 cout<<"NO"<<endl;
 else
 cout<<"YES"<<endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}