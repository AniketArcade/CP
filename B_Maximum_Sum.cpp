#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    vector<int> p(n+1);p[0]=0;
    for(int i=1;i<=n;i++) {
        cin>>a[i];

    }

    int sum=accumulate(a.begin(),a.end(),0ll);
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++) {

        p[i] =p[i-1]+a[i];

    }
    int ans=0;
    for(int x=0;x<=k;x++)
    {
      ans=max(ans,p[n-(k-x)]-p[2*x]);
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