#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<pair<int,int>> a;
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if(a[i].first*a[j].first>=2*n) break;
          if(a[i].first*a[j].first==a[i].second+a[j].second) ans++;
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