#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
 int n;cin>>n;
 vector<int> a(n);
 int mx=0;int mn=1e18;
 for(int i=0;i<n;i++){
    cin>>a[i];
    mx=max(mx,a[i]);
    mn=min(a[i],mn);
 }
 int ans=1e18;
 for(int i=mn;i<=mx;i++)
 {
    int temp=0;
   for(int j=0;j<n;j++){
    temp=max(temp,abs(a[j]-i));
   } 
   ans=min(ans,temp);
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