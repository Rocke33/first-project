#include <bits/stdc++.h>
using namespace std;

void rocke() {
    long long w, b;
    cin >> w >> b;

    long long w1 = 0, b1 = 0;
    int i = 0, ans1 = 0;
    while (true) {
        long long layer = (1LL << i);
        if (i % 2 == 0) w1 += layer;
        else b1 += layer;

        if (w1 <= w && b1 <= b) ans1 = i + 1;
        else break;

        i++;
    }

    w1 = 0; b1 = 0;
    i = 0;
    int ans2 = 0;
    while (true) {
        long long layer = (1LL << i);
        if (i % 2 == 0) b1 += layer;
        else w1 += layer;

        if (w1 <= w && b1 <= b) ans2 = i + 1;
        else break;

        i++;
    }

    cout << max(ans1, ans2) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}
