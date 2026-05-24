#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int s[200100];
vector<vector<int>> dp;
int rec(int i,int st)
{
 //
 if(i==n){
   return 0;
 }
 if(dp[i][st]!=-1) return dp[i][st];
 int ans=1e18;
 if(st==0){
     if(s[i]==0){
         ans=min(ans,rec(i+1,1));
         ans=min(ans,rec(i+1,2));
     }
     else {
         ans=min(ans,rec(i+1,1)+1);
         ans=min(ans,rec(i+1,2)+1);
     }
 }
 else if(st==1){
    if(s[i]==0){
         
         ans=min(ans,rec(i+1,2));
     }
     else {

         ans=min(ans,rec(i+1,2)+1);
     }
        
 }
 else if(st==2){
        ans=min(ans,rec(i+1,3));
        ans=min(ans,rec(i+1,0));
 }
 else if(st==3){
        ans=min(ans,rec(i+1,0));
 }
 return dp[i][st]=ans;
}

void solve()
{
    cin>>n;
    dp.assign(n+1,vector<int>(4,-1));
    for(int i=0;i<n;i++) cin>>s[i];
    cout<<rec(0,0);
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   

    return 0;
}