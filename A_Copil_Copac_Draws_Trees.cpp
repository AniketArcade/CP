#include <bits/stdc++.h>
using namespace std;
#define int long long



void solve()
{
    int n;
    cin>>n;
    vector<int> g[n+2];
    vector<int> vis(n+2,0);
    map<int,pair<int,int>> mp;
    for(int i=0;i<n-1;i++)
    {
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        
        mp[i]={u,v};
    }
  
    int ans=0;
    vis[1]=1;
    while(!mp.empty())
    {
      for(auto it=mp.begin();it!=mp.end();)
      {
          if(vis[it->second.first] && !vis[it->second.second])
          {
                vis[it->second.second]=1;
                it=mp.erase(it);
          }
          else if(!vis[it->second.first] && vis[it->second.second])
          {
                vis[it->second.first]=1;
                it=mp.erase(it);
          }
          else ++it;
      }
      ans++;
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