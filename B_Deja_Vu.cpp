#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n,q;
   cin>>n>>q;
   vector<int> a(n),x(q);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<q;i++) cin>>x[i];

   int m=31;
   for(int i=0;i<q;i++){
      int p=1ll<<x[i];
      int ad=1ll<<(x[i]-1);

     if(x[i]<m){
      for(int j=0;j<n;j++){
         if(a[j]%p==0){
            a[j] +=ad;
         }
      }
      m=x[i];
     }

   }
   for(int i=0;i<n;i++) cout<<a[i]<<" ";
    
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}