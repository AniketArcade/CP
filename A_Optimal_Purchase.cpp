#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int g=n/3;
    int rem=n%3;
    int ans=g*min(3*a,b)+min(rem*a, b);
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
