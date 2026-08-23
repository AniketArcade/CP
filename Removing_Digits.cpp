#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int dp[1000001];
int rec(int x){
    if(x==0) return 0;
    if(dp[x]!=-1) return dp[x];
    int ans=1e9;
    int num=x;
    while(num!=0){
        int rem=num%10;
        num /=10;
        if(rem!=0)ans=min(ans,rec(x-rem)+1);
    }
    return dp[x]=ans;
}
void solve()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<rec(n);
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