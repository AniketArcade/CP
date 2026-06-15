#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> a;
vector<int> dp;
int rec(int i)
{   
    if(i==0){
        return a[0];
    }
    if(dp[i]!=-1e15) return dp[i];
    int ans=a[i];
    if((abs(a[i])+abs(a[i-1]))%2){
        ans=max(a[i],rec(i-1)+a[i]);
    }
    return dp[i]=ans;
 
}
void solve()
{
 cin>>n;
 dp.assign(n+1,-1e15);
 a.resize(n);
 for(int i=0;i<n;i++)cin>>a[i];
 int ans=-1e18;
 for(int i=0;i<n;i++) ans=max(ans,rec(i));
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