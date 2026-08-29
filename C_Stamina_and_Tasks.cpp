#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   vector<int> c(n);
   vector<long double> p(n);
   for(int i=0;i<n;i++){ 
    int cc,pp;cin>>cc>>pp;
    c[i]=cc;
    p[i]=pp/100.0;
   }
   long double ans=0;
   int s=1;
   for(int i=n-1;i>=0;i--){
      ans =max(ans,c[i]+(1.0-p[i])*ans);
   }
   cout<<fixed<<setprecision(10)<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}