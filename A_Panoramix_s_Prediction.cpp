#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
   int n,m,i,j;
   cin>>n>>m;
    int flag=1;
    if(n==2 && m==3) {
        cout<<"YES";
        return 0;
    }
       for( j=n+2;j<=m;j=j+2){
        if(isprime(j)){
            flag=0;
            break;
        }
       }
   if(flag==0 && j==m) cout<<"YES"<<endl;
   else cout<<"NO"<<endl; 
   
    return 0;
}