#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    int ans=0;
    if(k>=2){
      n-=k;n++;
      ans +=(k-1)*2;
    }
    int cnt=1;
    for(int i=1;i<=n;i++){
        cnt *=2;
    }
    ans +=cnt;
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