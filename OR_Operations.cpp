#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int target = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        target |= a[i];
    }

    int segments = 0;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur |= a[i];
        if (cur == target) {
            segments++;
            cur = 0;
        }
    }

    cout << (n - segments);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
    int t;cin>>t;while(t--)
    {solve();if(t>0)cout<<"\n";}
    return 0;
}