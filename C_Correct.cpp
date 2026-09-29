#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int h,m;
    cin>>h>>m;
    int ans=0;
    ans +=(h-9)*60;
    ans +=m;
    cout<<ans;
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