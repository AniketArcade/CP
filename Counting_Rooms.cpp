#include <bits/stdc++.h>
using namespace std;
#define int long long
#define state pair<int,int>
#define S second
#define F first
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int n,m;
vector<string> a;
int cnt=0;
vector<vector<int>> vis;
bool inside(state node){
      int nx=node.F;
      int ny=node.S;
      
      if(nx>n-1 || nx<0) return 0;
      if(ny>m-1 || ny<0) return 0;
      if(a[nx][ny]=='#') return 0;
      return 1;
}
vector<state> neigh(state node){
    vector<state> ne;
    for(int i=0;i<4;i++){
        int x=node.F+dx[i];
        int y=node.S+dy[i];
        if(inside({x,y}))ne.push_back({x,y});
    }
    return ne;
}
void dfs(state x)
{
   vis[x.F][x.S]=1;
   for(auto v:neigh(x))
   {
    if(!vis[v.F][v.S]){
        dfs(v);
    }
   }
}
void solve()
{
    cin>>n>>m;
    a.resize(n);
    vis.assign(n,vector<int> (m,0));
    for(int i=0;i<n;i++) cin>>a[i];
    cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                if(!vis[i][j])
                {
                 cnt++;dfs({i,j});
                }
            }
        }
    }
    cout<<cnt;

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