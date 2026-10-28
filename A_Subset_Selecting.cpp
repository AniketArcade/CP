#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> cnt(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0, pref = 0;
    for (int v = 0; v <= n; v++)
    {
        pref += cnt[v];
        if (cnt[v] == 0 || pref < (v + 1) * k) break;
        ans = v + 1;
    }
    cout << ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}