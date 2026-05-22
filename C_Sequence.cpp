#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int arr[5005];
int dp[5005][5005];
int rec(int i,int j){
    //prunning

    //Basecase
    if(i==n-1)return 0;
    //Cachecheck
     if(dp[i][j]!=-1)return dp[i][j];
    // Transition
    int ans=1e18;
    for(int k=0;k<n;k++){
        if(arr[k]>=arr[j]){
            ans =min(ans,abs(arr[k]-arr[i+1])+rec(i+1,k));
        }
    }
    //SaveANdreturn
    return dp[i][j]=ans;

}
void solve()
{
 cin>>n;
 for(int i=0;i<n;i++)cin>>arr[i];
 memset(dp,-1,sizeof(dp));
    int ANS=1e18;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[1])ANS=min(ANS,rec(0,i)+abs(arr[i]-arr[0]));
    }
    cout<<ANS;
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
