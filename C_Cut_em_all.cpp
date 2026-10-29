#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<vector<int> >adj;
int sz[100010];
void dfs(int nn,int par){
    sz[nn]=1;
    for(auto v:adj[nn]){
        if(v!=par){
            dfs(v,nn);
            sz[nn] +=sz[v];
        }
    }
}
void solve()
{
    cin>>n;
    
    adj.assign(n+1,{});
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n%2){
        cout<<-1;
        return ;
    }
    dfs(1,-1);
    int ans=0;
    for(int i=2;i<=n;i++){
        if(sz[i]%2==0) ans++;
    }
    cout<<ans;
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