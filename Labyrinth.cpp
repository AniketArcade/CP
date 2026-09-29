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
vector<vector<int>> dist;
vector<vector<state>> par;
void bfs(state st){
    dist[st.F][st.S]=0;
    par[st.F][st.S]={-1,-1};
    vis[st.F][st.S] = 1; 
    queue<state> q;
    q.push(st);
    vis[st.F][st.S]=1;
    while(!q.empty()){
        state cur=q.front();
        q.pop();  
        
       for(auto v :neigh(cur)){
          if(!vis[v.F][v.S]){
            par[v.F][v.S]=cur;
            dist[v.F][v.S]=dist[cur.F][cur.S]+1;
            vis[v.F][v.S]=1;
            q.push(v);
          }
       }
    }
}
void printing(state end){
    string s;

    state cur = end;

    while(par[cur.F][cur.S] != make_pair(-1LL, -1LL)){

        state p = par[cur.F][cur.S];

        if(cur.F == p.F + 1) s.push_back('D');

        else if(cur.F == p.F - 1) s.push_back('U');

        else if(cur.S == p.S + 1) s.push_back('R');

        else if(cur.S == p.S - 1) s.push_back('L');

        cur = p;

    }

    reverse(s.begin(), s.end());

    cout << s;
}

void solve()
{
    cin>>n>>m;
    a.resize(n);
    dist.assign(n,vector<int> (m,0));
    vis.assign(n,vector<int> (m,0));
    par.assign(n,vector<state>(m));

    for(int i=0;i<n;i++) cin>>a[i];
    state st,end;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='A'){
                st={i,j};
            }
            if(a[i][j]=='B') end={i,j};
        }
    }
    bfs(st);
    if(vis[end.F][end.S]){
        cout<<"YES"<<"\n";
        cout<<dist[end.F][end.S]<<"\n";
        printing(end);

    }
    else cout<<"NO";
    

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