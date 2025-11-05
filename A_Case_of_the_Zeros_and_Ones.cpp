#include<bits/stdc++.h>
using namespace std;
void rocke(){
    int n;cin>>n;
    string s;cin>>s;
    int zero=count(s.begin(),s.end(),'0');
    int one=count(s.begin(),s.end(),'1');
    int operation=min(zero,one);
    cout<<n-(2*operation)<<endl;
}
int main(){
        rocke();
    return 0;
}