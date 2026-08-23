#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int MOD=1e9+7;
void solve()
{
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> dp(n+1,vector<int> (x+1,0));
    for(int i=0;i<=n;i++) dp[i][0]=1;

    for(int i=n-1;i>=0;i--){
        for(int sum=1;sum<=x;sum++){
           dp[i][sum]=dp[i+1][sum];
           if(a[i]<=sum){
            dp[i][sum] +=dp[i][sum-a[i]];
            dp[i][sum] %=MOD;
           }
        }
    }
    cout<<dp[0][x];
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   solve();
   return 0;
}