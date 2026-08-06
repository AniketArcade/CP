#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int S = 0;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        S += a[i];
        mp[a[i]]++;
    }

    int m = -1, f = 0;
    for (auto &it : mp)
    {
        if (it.second > f)
        {
            f = it.second;
            m = it.first;
        }
    }

    int ans;
    if (f <= (n + 1) / 2)
    {
        ans = S;
    }
    else
    {
        int r = n - f;
        int os = S - f * m;
        ans = os + (r + 2) * m;
    }
    cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}