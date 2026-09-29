#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;vector<int> a(n+1),b(n+1);
vector<vector<int>> g;
vector<int> G(n+1);
vector<int> ans(n+1);
void dfs(int u,int p)
{
    int s=0;
    int gc=0;
    for(auto v:g[u])
    {
        if(v==p) continue;
        dfs(v,u);
        if(G[v]!=b[v]) gc=gcd(gc,G[v]);
        s+=ans[v];
       
    }
    gc=gcd(gc,s);
    gc=gcd(gc,b[u]);
    G[u]=gc;
    ans[u]=a[u]+((b[u]-a[u]-1)/G[u])*G[u];
    
}
void solve()
{
    cin>>n;
    a.assign(n+1,0);
    b.assign(n+1,0);
    ans.assign(n+1,0);
    G.assign(n+1,0);
     g.assign(n+1,vector<int>());
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n-1;i++)
    {
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
     dfs(1,0);
    int sum=0;
    for(int i=1;i<=n;i++) sum+=ans[i];
    cout<<sum;
    
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}