#include <iostream>
#include <cmath>
using namespace std;

void rocke() {
    int n,m;cin>>n>>m;
    if(n<m)cout<<-1<<endl;
    else if(n==m) cout<<n<<endl;
    else {
         int min_move=ceil(n/2.0);
        while(min_move%m!=0){
           min_move++;
        }
        cout<<min_move<<endl;
    }
}

int main() {
        rocke();
    return 0;
}