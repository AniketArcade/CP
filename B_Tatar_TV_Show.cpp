#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n,k;cin>>n>>k;
   string s;cin>>s;
   int i=0,j=i+k;
   while(j<n){
     if(s[i]=='1'){
        s[i]='0';
        if(s[j]=='0')s[j]='1';
        else s[j]='0';
     }
     i++;j++;
   } 
   bool ans=true;
   for(int i=n-k;i<n;i++){
     if(s[i]=='1'){ ans=false;break;}
   }
   if(ans) cout<<"YES";
   else cout<<"NO";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}