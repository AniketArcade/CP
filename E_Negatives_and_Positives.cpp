#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> a;
int dp[200001][2];
int rec(int i,int j){
    //

    //
    if(i==n-1){
        if(j){
            return -a[i];
        }
        else return a[i];
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=-1e18;
    if(j==1){
        ans=max(ans,rec(i+1,1)+a[i]);
        ans=max(ans,rec(i+1,0)-a[i]);
    }
    else{
        ans=max(ans,rec(i+1,0)+a[i]);
        ans=max(ans,rec(i+1,1)-a[i]);
    }
    return dp[i][j]=ans;

}
void solve()
{
  cin>>n;
  a.resize(n);for(int i=0;i<n;i++) cin>>a[i];
  
  memset(dp,-1,sizeof(dp));
  cout<<max(rec(1,0)+a[0],rec(1,1)-a[0]);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}