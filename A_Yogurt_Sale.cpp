#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n,a,b;cin>>n>>a>>b;
    if(n%2==0){
    	if(2*a>b) cout<<(n/2)*b<<endl;
    	else cout<<n*a<<endl;
	}
	else{
		int burl=a;
		n--;
		if(2*a>b) burl=burl+(n/2)*b;
		else burl=burl+a*n;
		cout<<burl<<endl;
	}
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}