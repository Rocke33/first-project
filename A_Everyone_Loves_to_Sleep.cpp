#include <bits/stdc++.h>
using namespace std;

void rocke() {
  int n,h,m; cin>>n>>h>>m;
  int ansh=23,ansm=59;
  while(n--){
    int hour,minute;
    cin>>hour>>minute;
    int m_dif=minute-m;
    int h_dif=hour-h;
    if(m_dif<0){ m_dif=60+m_dif;h_dif--;}
    if(h_dif<0){
         h_dif=24+h_dif;
    }
    if(ansh>h_dif){
        ansh=h_dif;
        ansm=m_dif;
    }
    if(ansh==h_dif){
        ansm=min(ansm,m_dif);
    }
}
cout<<ansh<<" "<<ansm<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}