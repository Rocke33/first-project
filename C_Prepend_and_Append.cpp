#include<bits/stdc++.h>
using namespace std;
void rocke(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
	 while(((s[0]=='0')&&(s[s.size()-1]=='1')) || (s[0]=='1')&& (s[s.size()-1]=='0'))
	{
            s.erase(0,1);
            s.erase(s.size()-1,1);
}
        cout<<s.size()<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		rocke();
	}
    return 0;
}
