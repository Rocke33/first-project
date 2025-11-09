#include <bits/stdc++.h>
using namespace std;

void rocke() {
    int n, a, b;
    cin >> n >> a >> b;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < n ; i++) {
            cout << alphabet[i%b];
        }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--)
        rocke();
    return 0;
}
