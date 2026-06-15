#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
 int n,k;cin>>n>>k;
 vector<int> a(n+1),b(n+1);
 int p[n+1];
 p[0]=0;
 int mx[n+1];
 mx[0]=-1e9;
 for(int i=1;i<=n;i++){
    cin>>a[i];
    p[i] = p[i-1]+a[i];
 }
 for(int i=1;i<=n;i++)
 {
  cin>>b[i];
  mx[i]=max(mx[i-1],b[i]);
 }
 int ans=-1e18;
 for(int i=1;i<=n;i++){
    int cnt=k;
    cnt -= i;
   if(cnt>=0){
     int an= p[i]+(cnt*mx[i]);
    ans=max(ans,an);
   }
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