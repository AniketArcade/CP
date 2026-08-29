#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<vector<int>> g;
int dist[2000010];
int sz[2000010];
int ans[200010];
void dfs(int nn,int pp,int depth){
    dist[nn]=depth;
    sz[nn]=1;
    for(auto v: g[nn]){
        if(v!=pp){
            dfs(v,nn,depth+1);
            sz[nn] +=sz[v];
        }
    }
}
void dfs2(int nn,int pp){
    for(auto v: g[nn]){
        if(v!=pp){
            ans[v] =ans[nn]+n-2*sz[v];
            dfs2(v,nn);
        }
    }
}

void solve()
{
    cin>>n;
    g.resize(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,0,0);
    for(int i=1;i<=n;i++) ans[1] +=dist[i];
    dfs2(1,0);
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   solve();
    return 0;
}