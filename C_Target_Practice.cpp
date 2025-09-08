#include <bits/stdc++.h>
using namespace std;
void rocke() {
    int point=0;
    int p[10][10]={
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
{1, 1, 1, 1, 1, 1, 1, 1, 1, 1} 
    };
         char a[10][10];
    for(int i=0;i<10;i++){
           for(int j=0;j<10;j++){
              cin>>a[i][j];
              if(a[i][j]=='X')point+=p[i][j];
           }
  }
  cout<<point<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}