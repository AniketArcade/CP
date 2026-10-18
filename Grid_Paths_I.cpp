#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
int dp[1000][1000];
 int n;
bool inside(int i,int j,vector<string> &s){
     if(i>n-1 || j>n-1) return false;
     if(i<0 || j<0) return false;
     if(s[i][j]=='*') return 0;

     return 1;
}
int rec(int i,int j,vector<string> &s){


    if(i==n-1 && j==n-1) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(inside(i,j+1,s)){
       ans +=rec(i,j+1,s);
       ans %=MOD;
    }
    if(inside(i+1,j,s)){
        ans +=rec(i+1,j,s);
        ans %=MOD;
    }
    return dp[i][j]=ans;
}
void solve()
{
   cin>>n;
    memset(dp,-1,sizeof(dp));
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    if(s[0][0]=='*'){ cout<<0;return;}
    cout<<rec(0,0,s);
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