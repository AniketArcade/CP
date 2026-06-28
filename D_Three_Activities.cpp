#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<pair<int,int>> a, b, c;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i});
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back({x, i});
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c.push_back({x, i});
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k <3; k++)
            {
                if (a[i].second != b[j].second &&
                    a[i].second != c[k].second &&
                    b[j].second != c[k].second)
                {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }

    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        if (t) cout << "\n";
    }

    return 0;
}