#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x,y;cin>>x>>y;
    int r;cin>>r;
    cout<<x+r<<" "<<y;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}