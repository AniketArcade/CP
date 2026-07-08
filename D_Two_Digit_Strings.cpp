#include <bits/stdc++.h>
using namespace std;
#define int long long
string s,t;
vector<int> ps,pt;
vector<vector<int>> dp;
int rec(int i,int j)
{
    if(i==s.size() || j==t.size()) return 0;
 if(dp[i][j]!=-1) return dp[i][j];
 int ans=0;
 if(ps[i+1]==pt[j+1]) ans=max(ans,1+rec(i+1,j+1));
 ans=max(ans,rec(i+1,j));
 ans=max(ans,rec(i,j+1));
 return dp[i][j]=ans;
}
void solve()
{
    cin>>s>>t;
    dp.assign(s.size()+1,vector<int>(t.size()+1,-1));
    ps.resize(s.size()+1);
    pt.resize(t.size()+1);
    ps[0]=0;pt[0]=0;
    for(int i=1;i<=s.size();i++){
        ps[i]= (ps[i-1]+(s[i-1]-'0'))%10;
    }
    for(int i=1;i<=t.size();i++){
        pt[i]= (pt[i-1]+(t[i-1]-'0'))%10;
    }
    if(ps.back()!=pt.back()) cout<<-1;
    else cout<<rec(0,0);

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}