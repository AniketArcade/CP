#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=998244353;
int dp[100010];
int f(int n){
    if(n<=1) return n;
    if(n == 2) return 3;
	if(n == 3) return 2;
    int ans;
    int k=__lg(n);
    ans=min( (f(n-(1ll<<k)+2)+k+1) , (k+((1ll<<(k+1))-n)) );
    return ans;

}
void solve()
{
   int l,r;
   cin>>l>>r;
   int ans=0;
   for(int n = l; n <= r ; n++)
   {
     ans = ( ans + f(n) ) % MOD;
   } 
   cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   memset(dp,-1,sizeof(dp));
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}