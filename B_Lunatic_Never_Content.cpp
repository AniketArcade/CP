#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
 int n;cin>>n;
 int a[n];for(int i=0;i<n;i++) cin>>a[i];
 vector<int> v;
 for(int i=0;i<=n/2;i++)
 {
  v.push_back(abs(a[i]-a[n-i-1]));
 }
 int ans=0;
 for(int i=0;i<v.size();i++)
 {
  ans=gcd(ans,v[i]);
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