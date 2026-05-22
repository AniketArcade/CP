#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;string s;
int dp[300100][2][2];
int rec(int i,int is1,int is3){
   //Prunning
   
   //Basecase
   //cacah
   if(i==n-1)return 0;
   if(i!=-1) if(dp[i][is1][is3]!=-1)return dp[i][is1][is3];
   //Tras
   int ans=1e18;
   if(s[i+1]=='4'){
         ans =1+rec(i+1,is1,is3);
   }
   else if(s[i+1]=='1'){
    ans=min(ans,rec(i+1,1,is3));
    ans=min(ans,1+rec(i+1,is1,is3));
   }
   else if(s[i+1]=='3'){
    ans=min(ans,rec(i+1,is1,1));
    ans=min(ans,1+rec(i+1,is1,is3));
   }
   else{
        if(is1==1 || is3==1){
            ans=1+rec(i+1,is1,is3);
        }
        else ans=rec(i+1,is1,is3);
   }
   //saveandreturb
   if(i!=-1) dp[i][is1][is3]=ans;
   return ans;
}
void solve()
{
    cin>>s;
    n=s.length();
   for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
            dp[i][j][k]=-1;
        }
    }
   }

    cout<<rec(-1,0,0); 
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}
