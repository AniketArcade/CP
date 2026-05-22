#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, n, d1, d2;
    cin >> a >> n >> d1 >> d2;

    int pw[18];
    pw[0] = 1;
    for (int i = 1; i < 18; i++) pw[i] = pw[i-1] * 10;

    vector<int> cands;
    cands.push_back(d1);
    cands.push_back(d2);

    for (int pos = 1; pos < 18; pos++) {
        vector<int> next;
        for (int cur : cands) {
            next.push_back(cur + 0  * pw[pos]);
            next.push_back(cur + d1 * pw[pos]);
            next.push_back(cur + d2 * pw[pos]);
        }
        cands = next;
    }

    int ans = 2e18;
    for (int b : cands) ans = min(ans, abs(a - b));

    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}