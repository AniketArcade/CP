#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,k;
vector<int> a;
vector<vector<int>> adj;
vector<int> dist;
vector<int> vis;
void bfs(int nn){
   priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
   pq.push({dist[nn],nn});
   dist[nn]=0;
   while(!pq.empty()){
    auto [d,cur]=pq.top(); pq.pop();
    if(vis[cur]) continue;
    vis[cur]=1;
    for(auto v: adj[cur]){
            if(dist[cur]+1<dist[v]){
               dist[v]=dist[cur]+1; 
               pq.push({dist[v],v});
            }
    }
   }
}
void solve()
{
   cin>>n>>m>>k;
   a.resize(n+1);
   adj.resize(n+1);
   dist.assign(n+1,INT_MAX);
   for(int i=1;i<=n;i++) cin>>a[i];

   for(int i=0;i<m;i++){
    int u,v; cin>> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
   }

   vis.assign(n+1,0);
   bfs(1);

   vector<int> ans(k+1,0);
   for(int i=1;i<=n;i++)
   {
     ans[a[i]]=max(ans[a[i]],dist[i]);
   }

   for(int i=1;i<=k;i++) cout << ans[i] << " " ;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();

    return 0;
}