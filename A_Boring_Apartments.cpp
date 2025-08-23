#include<bits/stdc++.h>
using namespace std;
void rocke(){
 string s;
cin>>s;
int l=s.size();
if(l==1) l=1;
else if( l==2)l=3;
else if(l==3) l=6;
else l=10;
 
if(s[0]=='1') cout<<l<<endl;
else if(s[0]=='2') cout<<l+10<<endl;
else if(s[0]=='3') cout<<l+20<<endl;
else if(s[0]=='4') cout<<l+30<<endl;
else if(s[0]=='5') cout<<l+40<<endl;
else if(s[0]=='6') cout<<l+50<<endl;
else if(s[0]=='7') cout<<l+60<<endl;
else if(s[0]=='8') cout<<l+70<<endl;
else if(s[0]=='9') cout<<l+80<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
 rocke();
}
return 0;
}