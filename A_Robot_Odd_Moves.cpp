#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        if (b <= a && (a - b) % 2 == 0) cout << a;
        else if (b <= a + 1 && (a + 1 - b) % 2 == 0) cout << a + 1;
        else cout << -1;
        cout << "\n";
    }
}