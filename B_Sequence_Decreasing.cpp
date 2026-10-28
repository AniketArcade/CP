#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    bool c=0;
    int m=1e9;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        m=min(m,x);
        if(x==0) c=1;
    }
    if(c) cout<<n;
    else {
        if(m+1<=n) cout<<n;
        else cout<<0;
    }
    
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}