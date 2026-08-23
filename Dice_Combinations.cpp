#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int dp[1000001];
int rec(int sum){
    if(sum>n)return 0;
    if(sum==n)return 1;
    if(dp[sum]!=-1)return dp[sum];
    int ans=0;
    for(int i=1;i<=6;i++){
        ans+=rec(sum+i);
        ans %= 1000000007;
    }
    return dp[sum]=ans;
}
void solve()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<rec(0);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();

    return 0;
}