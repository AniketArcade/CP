#include <bits/stdc++.h>
using namespace std;
#define int long long
string s,t;
int n;
// int dp[200010];
// int rec(int i){

//     if(i==n-1) {
//         return ((s[i]=='f' && t[i]=='f') ? 0 : 1 );
//     }

//     if(i==n-2){
//     int cnt=0;
//     cnt += ((s[i]=='f') ? 1:0);
//     cnt += ((s[i+1]=='f') ? 1:0);
//     cnt += ((t[i]=='f') ? 1:0);
//     cnt += ((t[i+1]=='f') ? 1:0);
//     if(cnt==2 ||cnt==4 ) cnt=0;
//     else cnt=1;
//     return cnt;
//     }

//     if(dp[i]!=-1) return dp[i];
//     int ans=1e9;
//     ans=min(ans,rec(i+1)+ ((s[i]=='f'&&t[i]=='f')?0:1) );
//     int cnt=0;
//     cnt += ((s[i]=='f') ? 1:0);
//     cnt += ((s[i+1]=='f') ? 1:0);
//     cnt += ((t[i]=='f') ? 1:0);
//     cnt += ((t[i+1]=='f') ? 1:0);
//     if(cnt==2 || cnt==4 ) cnt=0;
//     else cnt=1;
//     ans=min(ans,rec(i+2) + (cnt) );
//     return dp[i]=ans;
// }
void solve()
{
    cin>>n>>s>>t;
    // for(int i=0;i<=n;i++) dp[i]=-1;
    // cout<<rec(0);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='f') cnt++;
        if(t[i]=='f') cnt++;
    }


    cout<<cnt%2;
    
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}