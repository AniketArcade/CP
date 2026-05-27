#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   int cnta=0;int cntb=0;
   for(int i=0;i<n;i++){
    if(s[i]=='a') cnta++;
    else cntb++;
   }  
   cout<<cnta<<" "<<cntb;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
  
    return 0;
}a