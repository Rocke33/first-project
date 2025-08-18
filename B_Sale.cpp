#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,carry;
    cin>>n>>carry;
    int prices[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>prices[i];
        if(prices[i]<0 && carry!=0){
        	sum=sum+prices[i];
            carry--;
		}
    }
      cout<<abs(sum);
}