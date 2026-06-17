#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int m,n;
   cin>>m>>n;
   int w= max((n-m+1)/2,0ll);
   int l=m-n+2*w;
   cout<<l;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
    int t;cin>>t;while(t--)
    {solve();if(t>0)cout<<"\n";}
    return 0;
}