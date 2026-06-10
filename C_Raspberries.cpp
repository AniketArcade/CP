#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int a[200010];
int dp[200010][6];
int rec(int i,int p)
{
    if(i==n){
        if(p%k==0)return 0;
        else return 1e9;
    }
    if(dp[i][p]!=-1)return dp[i][p];
    int ans=1e9;
    for(int j=0;j<=4;j++){
        ans=min(ans,rec(i+1,(p*(a[i]+j))%k)+j);
    }
    return dp[i][p]=ans;
}
void solve()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)cin>>a[i];
  memset(dp,-1,sizeof(dp));
  int ans=1e9;
  for(int i=0;i<=4;i++){
    ans = min(ans,rec(1,(a[i]+i))+i);
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