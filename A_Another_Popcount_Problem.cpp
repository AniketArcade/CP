#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    int ans=0;
    for(int cost=1;cost<=n;cost <<=1){
        int buy=min(k,n/cost);
        ans +=buy;
        n -= buy*cost;
        if(buy<k) break;
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