#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<vector<int>> g;
vector<int> vis;
map<pair<int,int>,int> mp;
vector<int> dp;
vector<int> id;
void dfs(int node){
    vis[node]=1;
    for(auto v:g[node])
    {
     if(!vis[v]){
        dp[v] = dp[node] + ( mp[{node,v}]>=id[node] ? 0 : 1 );
        id[v]= mp[{node,v}];
        dfs(v);
     }
    }

}
void solve()
{
    cin>>n;
    g.assign(n+2,{});
    vis.assign(n+2,0);
    dp.resize(n+2);
    id.resize(n+2);

    for(int i=0;i<n-1;i++)
    {
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        
        mp[{u,v}]=i+1;
        mp[{v,u}]=i+1;
    }
  
    int ans=0;
    dp[1]=1;
    id[1]=0;
    dfs(1);

    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i]);
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