#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n,m;cin>>n>>m;
   int x,y;cin>>x>>y;
   vector<int> a(x),b(y);
   for(int i=0;i<x;i++) cin>>a[i];
   for(int i=0;i<y;i++) cin>>b[i];
   map<int,int> mp;
   int ans=0;
   for(int i=0;i<n;i++)
   {
     mp[a[i]]++;
   }
   ans =n;
   vector<pair<int,int>> v;
   for(int i=0;i<y;i++)
   {
     v.push_back({b[i],mp[b[i]]});
   }
   for(int i=0;i<m;i++)
   {
    if(v[i].second>0)
    {    
        ans +=n;
        ans-= (v[i].second);
    }
    else {
        ans +=n;
    }
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