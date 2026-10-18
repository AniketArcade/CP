#include <bits/stdc++.h>
using namespace std;
// #define int long long
int n,x;
vector<int> h,s;
int dp[1001][100001];
int rec(int i, int price){

    if(i==n) {
        return 0;
    }
    if(dp[i][price]!=-1) return dp[i][price];
    int ans=0;
    ans=max(rec(i+1,price),ans);
    if((price-h[i+1])>=0)ans=max(ans,s[i+1]+rec(i+1,price-h[i+1]));
    return dp[i][price]=ans;
}
void solve()
{
    cin>>n>>x;
    h.resize(n+1);
    s.resize(n+1);
    // memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++) cin>>h[i];
    for(int i=1;i<=n;i++) cin>>s[i];

    for(int i=1;i<=n;i++){
        for(int c=0;c<=x;c++){
               dp[i][c]=dp[i-1][c];
               if(c>=h[i]){
                dp[i][c]=max(dp[i][c],s[i]+dp[i-1][c-h[i]]);
               }
        }
    }
    cout<<dp[n][x];


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