#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<vector<int>> adj;
vector<int> dist;
vector<int> vis;
vector<int> pr;
void bfs(int nn){
    dist.assign(n+1,INT_MAX);
    vis.assign(n+1,0);
    pr.resize(n+1);
    priority_queue<pair<int,int> ,vector<pair<int,int> > ,greater<pair<int,int> >> pq;
    dist[nn]=1;
    pq.push({dist[nn],nn});
    pr[nn]=0;
    
    while(!pq.empty()){
      auto[d,cur]=pq.top();pq.pop();
      if(vis[cur]) continue;
      vis[cur]=1;

      for(auto v:adj[cur]){
          if(dist[cur]+1<dist[v]){
            dist[v]=dist[cur]+1;
            pq.push({dist[v],v});
            pr[v]=cur;
          }
      }

    }

}
void solve()
{
    cin>>n>>m;
    adj.resize(n+1);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    if(vis[n]){
        cout<<dist[n]<<"\n";
        
         vector<int> ans;
         ans.push_back(n);
          int cp=pr[n];

         while(cp!=0){
            ans.push_back(cp);
            cp=pr[cp];
         }

         for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";


    }
    else {
        cout<<"IMPOSSIBLE";
    }

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