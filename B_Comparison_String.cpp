#include<bits/stdc++.h>
using namespace std;        
void rocke(){
    int n;cin>>n;
    string s; cin>>s;
    vector<int>v;
    int same=1;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]==s[i+1]){
            same++;
        }
        else{
            v.push_back(same);
            same=1;
        }
    }
      v.push_back(same);
    cout<<(*max_element(v.begin(),v.end()))+1<<endl; 
}
int main(){
    int t;cin>>t;
    while(t--)
    rocke();
    return 0;
}