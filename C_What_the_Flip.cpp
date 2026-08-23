#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 vector<vector<vector<int>>> dp;
int k;
int rec(int i,int s,int t){
    if(i==k) return 1;
    if(dp[i][s][t]!=-1) return dp[i][s][t];
    int ans=0;
    if(s==0) ans +=rec(i+1,s+1,0);
    ans %=mod;
    if(t<=1) ans +=rec(i+1,0,t+1);
    ans %=mod;
    return dp[i][s][t]=ans;
}
void solve()
{
    cin>>k;
    dp.assign(k + 1,vector<vector<int>>(2, vector<int>(3, -1)));
    cout<<rec(0,0,0);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}