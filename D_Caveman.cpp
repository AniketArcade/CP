#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> vis;
vector<vector<int>> adj;
int n,m;
void dfs(int nn){
    vis[nn]=1;
    for(auto v:adj[nn]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
void solve()
{
    cin>>n>>m;
    vis.assign(n+1,0);
   adj.assign(n+1, {});
    vector<int> d(n+1,0);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        d[u]++;
        d[v]++;
    }
    for(int i=1;i<=n;i++){
        if(d[i]==0){
            cout<<"Brain Melt";
            return;
        }
    }
    dfs(1);
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            cout<<"Many";
            return;
        }
    }
    sort(d.begin(),d.end());
    bool ans=true;
    if(d[n]==n-1){
        for(int i=1;i<n;i++) {
            if(d[i]!=1){
                ans=false;
                break;
            }
        }
    }
    else ans=false;

    if(ans) cout<<2;
    else cout<<"Many";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}