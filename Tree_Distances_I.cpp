#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<vector<int>> g;
int dist[200001];
int distx[200001];
int disty[200001];

void dfs(int nn,int pp,int depth){
    dist[nn]=depth;
    for(auto v: g[nn]){
        if(v!=pp){
            dfs(v,nn,depth+1);
        }
    }
}
void dfsx(int nn,int pp,int depth){
    distx[nn]=depth;
    for(auto v: g[nn]){
        if(v!=pp){
            dfsx(v,nn,depth+1);
        }
    }
}
void dfsy(int nn,int pp,int depth){
    disty[nn]=depth;
    for(auto v: g[nn]){
        if(v!=pp){
            dfsy(v,nn,depth+1);
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
    int x=1;
    for(int i=1;i<=n;i++){
        if(dist[i]>dist[x]){
            x=i;
        }
    }
    dfs(x,0,0);
    int y=1;
    for(int i=1;i<=n;i++){
        if(dist[i]>dist[y]){
            y=i;
        }
    }
    dfsx(x,0,0);
    dfsy(y,0,0);
    for(int i=1;i<=n;i++){
        int ans=max(distx[i],disty[i]);
        cout<<ans<<" ";
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