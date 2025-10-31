#include<bits/stdc++.h>
using namespace std;
void rocke(){
long long int n,q; cin>>n>>q;
	vector<long long int>v(n);
	for(long long int i=0;i<n;i++){
		cin>>v[i];
	}
	// prefix system
	vector<long long int>prefix_sum(n+1,0);
		for(int i=0;i<n;i++){
			prefix_sum[i+1]=prefix_sum[i]+v[i];
		}
		
	while(q--){
		long long int l,r,k; cin>>l>>r>>k;
		 long long int substitute_section_sum=prefix_sum[r]-prefix_sum[l-1];
		 long long int sum_of_k=(r-l+1)*k;
		long long int sum=prefix_sum[n]-substitute_section_sum+sum_of_k;
		if(sum%2==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		rocke();
	}
	return 0;
}