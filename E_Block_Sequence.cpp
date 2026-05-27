#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[200100];
vector<int> dp;
int rec(int i )
{
    if(i>n) return 1e18;
    if(i==n) return 0;
    if(i==n-1) return 1;
    if(dp[i]!=-1) return dp[i];
    int ans=1e18;
    ans=min(ans,rec(i+1)+1);
    ans=min(ans,rec(i+a[i]+1));
    return dp[i]=ans;
}
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    dp.assign(n+1,-1);
    cout<<rec(0);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}