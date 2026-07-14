#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> a(n+1),pref(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i],pref[i]=pref[i-1]+a[i];
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b.begin(),b.end());
    int ans=0;
    int prev=0;
    for(int i=0;i<m;i++){
        int cur=b[i];
        int sum=pref[cur]-pref[prev];
        ans += abs(sum);
        prev=cur;
    }
    ans += (pref[n]-pref[prev]);
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