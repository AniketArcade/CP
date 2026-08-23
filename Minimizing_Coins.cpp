#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,x;
vector<int> c;
int dp[1000001];
int rec(int sum){
    if(sum<0)return INT_MAX;
    if(sum==0)return 0;
    if(dp[sum]!=-1)return dp[sum];
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans,rec(sum-c[i])+1);
    }
    return dp[sum]=ans;
}
void solve()
{
cin>>n>>x;
c.resize(n);
memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++)
{
    cin>>c[i];}

    if(rec(x)!=INT_MAX)
    {
        cout<<rec(x);
    }
    else
    {
        cout<<-1;
    }
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