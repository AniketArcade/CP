#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> g[200001];
int sz[200001];
void dfs(int nn,int pp)
{
 sz[nn]=1;
 for(auto v:g[nn]){
    if(v!=pp){
        dfs(v,nn);
        sz[nn] +=sz[v];
    }
 }
}
void solve()
{
   cin>>n;
   for(int i=2;i<=n;i++)
   {
    int a;cin>>a;
    g[i].push_back(a);
    g[a].push_back(i);
   }
   dfs(1,0);
   for(int i=1;i<=n;i++){
    cout<<sz[i]-1<<" ";
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