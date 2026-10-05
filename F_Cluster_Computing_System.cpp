#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n ; cin >> n ;
    vector<int> p(n+1);
    int pref[n+1],suff[n+2];
    pref[0]=0;suff[n+1]=0;
    for(int i = 1 ; i <= n ; i++){
        cin>>p[i];
        pref[i]=__gcd(pref[i-1],p[i]);
    }
    for(int i=n;i>=1;i--){
        suff[i]=__gcd(suff[i+1],p[i]);
    }
    int ans=pref[n];
    for(int i=2;i<=n-1;i++){
        ans +=min(pref[i],suff[i]);
    }

    cout << ans ;
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