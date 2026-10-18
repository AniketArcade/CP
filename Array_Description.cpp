#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int MOD=1e9+7;
vector<int> x;
int dp[100001][101];
int rec(int i,int prev){

    if(i==n){
        if(x[n]!=0) return 1;
        else{
            int cnt=1;
            if(prev+1<=m) cnt++;
            if(prev>=2) cnt++;
            return cnt;
        }
    }
    if(dp[i][prev]!=-1) return dp[i][prev];
    int ans=0;
    if(x[i]==0)
    {
        if(x[i+1]!=0){
               if(prev+1<=m)if(abs(prev+1-x[i+1])<=1)ans +=rec(i+1,prev+1);
               ans %=MOD;
               if(prev>=2)if(abs(prev-1-x[i+1])<=1)ans +=rec(i+1,prev-1);
               ans %=MOD;
               if(abs(prev-x[i+1])<=1)ans +=rec(i+1,prev);
               ans %=MOD;
        }
        else{
            if(prev+1<=m)ans +=rec(i+1,prev+1);
            ans %=MOD;
            if(prev>=2)ans +=rec(i+1,prev-1);   
            ans %=MOD;
            ans +=rec(i+1,prev);
            ans %=MOD;
        }
       
    }
    else{
        ans +=rec(i+1,x[i]); 
         ans %=MOD;
    }
    return dp[i][prev]=ans;
}
void solve()
{
    cin>>n>>m;
    x.resize(n+1);
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++) cin>>x[i];
    if(n==1){
        if(x[1]==0){
            cout<<m;
        }
        else cout<<1;

        return ;
    }
    bool ch=1;
    for(int i=1;i<n;i++){
        if(x[i]!=0 && x[i+1]!=0){
        if(abs(x[i]-x[i+1])>1){
            ch=0;
            break;
        }
    }
    }
    if(!ch){
        cout<<0;
        return;
    }
    if(x[1]==0){
       int ans=0;
       if(x[2]==0){
        for(int i=1;i<=m;i++){
        ans +=rec(2,i);
         ans %=MOD;
       }
       }
       else{
          for(int i=1;i<=m;i++){
        if(abs(x[2]-i)<=1)ans +=rec(2,i);
         ans %=MOD;
       }
       }
       cout<<ans;
    }
    else{
        cout<<rec(2,x[1]);
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