#include <bits/stdc++.h>
using namespace std;
#define int long long

int MOD = 998244353;
int n;
string s;
int dp[200005][2][2];
int rec(int i, int a, int b)
{
    if (i==n - 1) return 1;
    if (dp[i][a][b] != -1) return dp[i][a][b];
    int ans=0;
    for (int c = 0; c < 2; c++)
    {
        if (s[i + 1] != '?' && (s[i + 1] - '0') != c) continue;
        if (a == c) continue; 
        ans = (ans + rec(i + 1, b, c)) % MOD;
    }

    return dp[i][a][b] = ans;
}

void solve()
{
    cin>>n>>s;
    for (int i = 0; i < n; i++){
        for (int a = 0; a < 2; a++){
            for (int b = 0; b < 2; b++){
                dp[i][a][b] = -1;}
            }
        }
    int ans = 0;
    for (int a = 0; a < 2; a++)
    {
        if (s[0] != '?' && (s[0] - '0') != a) continue;
        for (int b = 0; b < 2; b++)
        {
            if (s[1] != '?' && (s[1] - '0') != b) continue;
            ans = (ans + rec(1, a, b)) % MOD;
        }
    }
    cout<<ans<<"\n";
}

signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   int t; cin >> t;
   while (t--) solve();
   return 0;
}