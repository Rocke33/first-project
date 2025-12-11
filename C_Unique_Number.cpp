#include <bits/stdc++.h>
using namespace std;

void rocke() {
   int n; cin>>n;
   if(n<10){
       cout<<n<<endl;
       return;
   }  
   if(n>45){
       cout<<-1<<endl;
       return;
   }
   int sum=9;  
   int dig=8;
   while(sum+dig<n){
        sum=sum+dig;
        dig--;
   }
  cout<<n-sum;
  for(int i=dig+1;i<=9;i++){
      cout<<i;
  }
  cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}