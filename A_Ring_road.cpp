#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> adj;
map<pair<int,int>,int> mp;
vector<int> vis;

int dfs(int nn,int pp){
 vis[nn]=1;
 int ans=0;
 for(auto v: adj[nn]){
    if(v!=pp)if(v==1) return mp[{nn,1}];
    if(!vis[v]){
        ans +=mp[{nn,v}];
        ans +=dfs(v,nn);
    }
 }
 return ans;
}
void solve()
{
    int n;cin>>n;
    adj.resize(n+1);

    int cnt=0;
    for(int i=0;i<n;i++){
        int a,b,c;cin>>a>>b>>c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        mp[{a,b}]=0;
        mp[{b,a}]=c;
        cnt+=c;
    }
    
   int cost=1e9;
   for(auto v:adj[1]){
        vis.assign(n+1,0);vis[1]=1;
      cost=min(cost,dfs(v,1)+mp[{1,v}]);
   }
   cout<<cost;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   solve();
    return 0;
}