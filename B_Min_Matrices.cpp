#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k < n || k > 2 * n - 1) {
        cout << -1 << '\n';
        return;
    }

    int d = k - n;
    int cols = n - d;

    vector<vector<int>> a(n + 1, vector<int>(n + 1));

    int num = 1;


    for (int i = 1; i <= cols; i++) {
        a[i][i] = num++;
    }

    for (int i = cols + 1; i <= n; i++) {
        a[i][1] = num++;
    }


    for (int j = cols + 1; j <= n; j++) {
        a[1][j] = num++;
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 0) {
                a[i][j] = num++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}