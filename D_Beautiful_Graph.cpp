#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int MOD=998244353;
int binpow(int a,int b){
    if(b==0)return 1;
    else if(b%2==0){
        int res=binpow(a,b/2);
        return (res*res)%MOD;
    }
    else{
        return (a*binpow(a,b-1))%MOD;
    }
}
bool isbipartite=true;
vector<int> colour;
vector<vector<int>> adj;
vector<int> vis;
int cnt1=0,cnt2=0;
void dfs(int node,int col)
{
    vis[node]=1;
    if(col==1)cnt1++;
    else cnt2++;
    colour[node]=col;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,3-col);
        }
        else if(colour[it]==col){
            isbipartite=false;
            return;
        }
    }
}
void solve()
{
 cin>>n>>m;
 adj.assign(n+1,{});
vis.assign(n+1,0);
colour.assign(n+1,0);
 isbipartite=true;
 for(int i=0;i<m;i++){
     int u,v;cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
 }
 int ans=1;
for(int i=1;i<=n;i++){
    
    if(!vis[i]){
        cnt1=0;cnt2=0;
        dfs(i,1);
        if(!isbipartite)break;
    ans *= (binpow(2,cnt1)+binpow(2,cnt2))%MOD;
    ans%=MOD;
    }
    

}
if(!isbipartite){
    cout<<0;
    return;
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
