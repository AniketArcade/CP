#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
void solve()
{
    cin>>n;
    double dp[n+1];
    double s[n+1];
    dp[0]=0;s[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=1+ s[i-1]/i;
        s[i]=dp[i]+s[i-1];
    }
    cout<<1+floor(s[n-1]/n);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}