#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
  int n;cin>>n;  
  int a[4*n+1];
  vector<int>check(4*n+1,0);
    for(int i=1;i<=n;i++) a[i]=i;
    for(int i=n+1;i<=2*n;i++) a[i]=i-n;
    for(int i=3*n+1;i<=4*n;i++) a[i]=i-3*n;
    int cnt=2;
    for(int i=2*n+1;i<=3*n;i++) {
     a[i]=cnt;
     cnt++;
     if(cnt>n) cnt=1;
    }

    for(int i=1;i<=4*n;i++)
  {
      cout<<a[i]<<" ";
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