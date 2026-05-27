#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
  int n;cin>>n;
  vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
  int mn=1e9;
for(int i=0;i<n;i++)mn=min(mn,a[i]);
int cnt=0;
for(int i=0;i<n;i++) if(mn==a[i]) cnt++;
if(cnt>=2) cout<<"YES";
else cout<<"NO";


}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   

    return 0;
}