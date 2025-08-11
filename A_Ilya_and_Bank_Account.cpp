#include<bits/stdc++.h>
using namespace std;
int main(){
string n;
cin>>n;
if(n[0]!='-'){
    cout<<n;
}
else{
  if(n[n.size()-1] < n[n.size()-2]){
    n.erase(n.size()-2,1);
  }
  else{
     n.erase(n.size()-1,1);
  }
  if(n=="-0") cout<<0;
  else  cout<<n;
}
    return 0;
}