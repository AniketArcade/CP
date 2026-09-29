#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<vector<int>> adj;
vector<int> cc_number;
vector<int> vis;
void dfs(int nn,int cc){
    cc_number[nn]=cc;
    vis[nn]=1;
    for(auto v:adj[nn]){
        if(!vis[v]){
            dfs(v,cc);
        }
    }
}
void solve()
{
   cin>>n>>m;
   adj.resize(n+1);
   cc_number.resize(n+1);
   vis.assign(n+1,0);
   for(int i=0;i<m;i++){
         int a,b;cin>>a>>b;
         adj[a].push_back(b);
         adj[b].push_back(a);
   } 
   int c=1;
   for(int i=1;i<=n;i++)
   {
    if(!vis[i]){
        dfs(i,c);
        c++;
    }   
   }
   vector<int> cc(c);

   for(int i=1;i<=n;i++){
       cc[cc_number[i]]=i;
   }
   cout<<c-2<<"\n";
   for(int i=1;i<c-1;i++){
    cout<<cc[i]<<" "<<cc[i+1]<<"\n";
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