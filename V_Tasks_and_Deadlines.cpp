#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first < b.first;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    while (n--)
    {
        int a, d;
        cin >> a >> d;
        v.push_back({a, d});
    }
    sort(v.begin(), v.end(), cmp);
    int count = 0;
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        count += v[i].first;
        ans += (v[i].second - count);
    }
    cout << ans;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;cin>>t;while(t--)
 
    solve();
 
    return 0;
}