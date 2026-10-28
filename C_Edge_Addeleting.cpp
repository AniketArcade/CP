#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> adj;
vector<int> d;
vector<int> vis;
void dfs(int u)
{
    if (u == 1) return;
    vis[u]=1;
    for (int w : adj[u])
        if (!vis[w])
        {
            d[w] = d[u] + 1;
            dfs(w);
        }
}

void solve()
{
    int n, m;
    
    cin >> n >> m;
    vis.assign(n+1,0);
    adj.assign(n + 1, {});
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    d.assign(n+1,-1);
    d[n] = 0;
    dfs(n);
    int ans = d[1];                        
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        if (d[v] != -1) ans = max(ans, d[v] + 1);  
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