#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,sum,odd;
cin>>n;
if(n%4 != 0) cout<<"NO"<<endl;
else{
    sum=0;
    cout<<"YES"<<endl;
    for(int i=2;i<=n;i=i+2){
        cout<<i<<" ";
        sum=sum+i;
    }
    odd=1;
    cout<<1<<" ";
    for(int i=1;i<n/2-1;i++){
    	odd=odd+2;
        cout<<odd<<" ";
    }
    cout<<sum-(pow((n/2-1),2))<<endl;
}
    }
    return 0;
}