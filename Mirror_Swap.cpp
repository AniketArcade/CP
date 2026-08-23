#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(2*n+1);
    for(int i=1;i<=2*n;i++){
        cin>>a[i];
    }
    int ans=0;
     for(int i=1;i<=n;i++)
     {
         ans +=max(a[i],a[2*n+1-i]) ;
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