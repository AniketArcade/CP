#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, k0;
vector<int> base;

bool check(int s)
{
    int M = k0 + n + 2 * s, used = 0;
    multiset<int> S;        // all current nodes with value >= v
    vector<int> add(base);  // nodes with value < v, waiting to enter S
    for (int v = n; v >= 1; v--)
    {
        for (int i = 0; i < add[v]; i++) S.insert(v);
        while ((int)S.size() > M - v)   // too many leaves >= v
        {
            if (used++ >= s) return false;
            int x = *S.begin(); S.erase(S.begin());  // split smallest node >= v
            int h = (x + 1) / 2;
            if (h >= v) { S.insert(h); S.insert(h); }
            else add[h] += 2;
        }
    }
    return true;
}

void solve()
{
    cin >> n >> k0;
    vector<int> a(n);
    base.assign(n + 2, 0);
    for (auto &x : a) { cin >> x; base[x]++; }
    if (k0 < 0) { cout << -1; return; }
    int lo = 0, hi = 2 * n + 2;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (check(mid)) hi = mid; else lo = mid + 1;
    }
    cout << n + 2 * lo;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   // solve();

    return 0;
}