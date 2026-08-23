#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
  int n;cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int c1=0,c0=0;
  for(int i=0;i<n;i++){
      if(a[i]%2) c1++;
      else c0++;
  }
  int ans=0;
  if(abs(c1-c0)>=1){
      int b=min(c1,c0);
      ans =max(ans,2*b+1);
  }
  else{
      ans=max(ans,n);
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