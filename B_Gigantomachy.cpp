#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i< m;i++) cin>>b[i];
        int cnta=n-1+a[0];
        int cntb=m-1+b[0];
          if(cnta>=cntb) cout<<1;
          else cout<<2;
         


}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}