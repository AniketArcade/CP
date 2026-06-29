#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;

    int ans;
    if(n%2)
    {
     if(k>=(n+1)/2)
     {
       int c=(n)/2;
       int add=(k-1)/c;
       k +=add;

       ans=k%n;
      if(ans==0) cout<<n;
      else cout<<ans;
     }
     else {
      ans=k%n;
      if(ans==0) cout<<n;
      else cout<<ans;}
    }
    else{
      ans=k%n;
      if(ans==0) cout<<n;
      else cout<<ans;

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