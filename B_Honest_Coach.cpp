#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n; cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    int min =1000;
    for(int i=0;i<n-1;i++){
        int dif=s[i+1]-s[i];
        if(min>dif)min=dif;
    }
    cout<<min<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}