#include<bits/stdc++.h>
using namespace std;
void rocke(){
    int a,b,c;cin>>a>>b>>c;
    int x=2*b - c;
    if(x>0 && x%a==0){
        cout<<"YES"<<endl;
        return;
    }
    int y= 2*b - a;
    if(y>0 && y%c==0){
        cout<<"YES"<<endl;
        return;
    }
    int z=(a+c)/2;
    if((a+c)%2==0 && z%b==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        rocke();
    }
    return 0;
}