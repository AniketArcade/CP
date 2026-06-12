#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y; cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,-1});    
    }
    sort(v.begin(),v.end());
    int ans=0;
    int cur=0;
    for(auto x:v)
    {
        cur +=x.second;
        ans = max(ans,cur);
    }
    cout<<ans<<"\n";
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