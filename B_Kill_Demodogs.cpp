#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
void solve()
{
   int n;cin>>n;
   cout<<((337*(n*(n+1)%MOD)%MOD)*(4*n-1)%MOD)%MOD ;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}