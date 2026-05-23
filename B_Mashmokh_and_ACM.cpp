#include <bits/stdc++.h>
using namespace std;
#define int long long
int M=1e9+7;
vector<int> divisors[2010];
void pre(){
    for(int i=1;i<=2000;i++){
        for(int j=i;j<=2000;j+=i)
        {
          divisors[j].push_back(i);
        }
    }
}
int n,k;
int dp[2010][2010];
int rec(int i,int num){
    //prunning
    
    //Basecase
    if(i==1) return 1;
    //cache
    if(dp[i][num]!=-1) return dp[i][num];
    //Trasition
    int ans=0;
    for(auto x:divisors[num]){
        ans += rec(i-1,x);
        ans %=M;
    }
    //savandreturn
    return dp[i][num]=ans;
}
void solve()
{
 cin>>n>>k;
 int ans=0;
 memset(dp,-1,sizeof(dp));
 for(int i=1;i<=n;i++){
    ans += rec(k,i);
    ans %=M;
 }
 cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   pre();
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();

    return 0;
}