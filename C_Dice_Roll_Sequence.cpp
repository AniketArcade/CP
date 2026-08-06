#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> a;
vector<vector<int>> dp;
int rec(int i,int prev)
{
   if(i==n) return 0;

    if(dp[i][prev]!=-1) return dp[i][prev];
 int ans=LLONG_MAX;
 for(int v=1;v<=6;v++){
    if(v==prev || v+prev==7) continue;
    int cost=(a[i]!=v);
    ans=min(ans,cost+rec(i+1,v));
 }
 return dp[i][prev]=ans;
}
void solve()
{
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    dp.assign(n,vector<int>(7,-1));
    cout<<rec(0,0);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();cout<<"\n";}
    return 0;
}