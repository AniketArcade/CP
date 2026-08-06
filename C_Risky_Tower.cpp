#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
vector<vector<int>> a;
vector<int> v;

bool check(int x)
{
    if (x >= m) return true;
    if (x == 0) return false;

    priority_queue<int> pq;
    int sum = 0;

    for (int k = n - 1; k >= 0; k--)
    {
        for (int j = 0; j < m; j++)
        {
            int val = a[k][j];
            if (pq.size() < x)
            {
                pq.push(-val);
                sum += val;
            }
            else if (!pq.empty() && -pq.top() < val)
            {
                sum += pq.top();
                pq.pop();
                pq.push(-val);
                sum += val;
            }
        }
        if (sum >= v[k]) return true;
    }
    return false;
}

void solve()
{
    cin >> n >> m;
    v.assign(n, 0);
    a.assign(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int lo = 0, hi = m, ans = m;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (check(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}