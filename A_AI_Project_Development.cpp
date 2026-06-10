#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
  int n,x,y,z;cin>>n>>x>>y>>z;
  int ans=1e9;
  if(n%(x+y)){
    ans=min(ans,(n/(x+y)) + 1);
  }
  else ans=min(ans,n/(x+y));
  n= n-z*x;
  if(n>0){
    if(n%(10*y+x)){
      ans=min(ans,(n/(10*y+x)) + z+1);
    }
    else ans=min(ans,n/(10*y+x)+z);
  }
  else {
    n += z*x;
    if(n%x){
      ans =min(ans,(n/x) + 1);
    }
    else ans=min(ans,n/x);
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