#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   vector<int> a(n+1);
   a[0]=-1e18;
   for(int i=1;i<=n;i++) cin>>a[i];
   int pse[n+2];
   pse[0]=0;
   for(int i=1;i<=n;i++)
   {
    pse[i]=i-1;
    while(a[i]<=a[pse[i]])
    {
     pse[i]=pse[pse[i]];
    }
   }
   for(int i=1;i<=n;i++) cout<<pse[i]<<" ";
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