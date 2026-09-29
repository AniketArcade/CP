#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m;cin>>n>>m;
    vector<int> a(n);
    vector<int> mp(m+2,0);
    vector<int> sx(m+2,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=m;i>=1;i--){
        sx[i] =sx[i+1]+mp[i];
    }
    vector<int> ans(m+1,0);
    int c=min(m,(long long)18);
    for(int k=1;k<=c;k++)
    {
      for(int x=1;x<=m;x++){
        int cnt=0;
        for(int j=1;j<=k+1;j++){
            if(j*x<=m)cnt += j*sx[j*x];
        }
        ans[k]=max(ans[k],cnt);
      }
    }
    if(m>18){
        for(int i=19;i<=m;i++){
            ans[i]=ans[18];
        }
    }
    for(int i=1;i<=m;i++){
        cout<<ans[i]<<" ";
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