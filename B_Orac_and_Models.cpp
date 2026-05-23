#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;int s[1000005];
int dp[1000005];
int rec(int i){
    //Prunning
    if(i>n) return 0;
    //Basecase
   
    //cachecheck
    if(dp[i]!=-1) return dp[i];
    //Trasition
    int ans=0;
    int j=i+i;
    if(j>n) ans=max(ans,1+rec(j));
    while(j<=n){
        if(s[i]<s[j]){
            ans=max(ans,1+rec(j));
        }
        j+=i;
        if(j>n) ans=max(ans,1+rec(j));
    }
    //Saveandreturn
    return dp[i]=ans;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
     cin>>n;
     for(long long i=1;i<=n;i++)cin>>s[i];
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,rec(i));
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