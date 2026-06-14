#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n,k;cin>>n>>k;
   vector<int> a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.rbegin(),a.rend());
   bool poss=false;
   for(int i=1;i<=n-2;i++)
   {
     if(a[i-1]-a[i]>k && (a[i]-a[i+1]<=k && a[i]-a[i+1]>0)){
        poss=true;
        cout<<"YES";
     }
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