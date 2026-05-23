#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int h[3][100100];
int dp[100100][3];
int rec(int i,int r){
    //Pruninng
    //Basecase
    if(i==n)return 0;
    //cache
    if(dp[i][r]!=-1)return dp[i][r];
    //Trasition
    int ans=0;
    if(r){
        ans=max(ans,rec(i+1,3-r)+h[3-r][i+1]);
        ans=max(ans,rec(i+1,r));
    }
    else {
        ans=max(ans,rec(i+1,0));
        ans=max(ans,rec(i+1,1)+h[1][i+1]);
        ans=max(ans,rec(i+1,2)+h[2][i+1]);
    }
    //save and return
    return dp[i][r]=ans;
}
void solve()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<3;i++){
        for(int j=1;j<=n;j++){
            cin>>h[i][j];
        }}

    int ans=0;
    ans=max(ans,rec(0,0));
    ans=max(ans,rec(0,1)+h[1][0]);
    ans=max(ans,rec(0,2)+h[2][0]);
    cout<<ans;    

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