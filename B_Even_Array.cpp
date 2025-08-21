#include<bits/stdc++.h>
using namespace std;
void rocke(){
    int n;
    cin>>n;
    int count=0;
    int even=0,odd=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
        if(i%2==0 && a[i]%2!=0){
            count++;
        }
        else if(i%2!=0 && a[i]%2==0){
            count++;
        }
    }
    if(n%2==0 && even!=odd) cout<<-1<<endl;
    else if(n%2!=0 && even!=n/2+1) cout<<-1<<endl; 
    else if(count%2!=0) cout<<-1<<endl;
    else cout<<count/2<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    rocke();
   }
    return 0;
}