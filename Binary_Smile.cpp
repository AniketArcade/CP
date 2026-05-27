#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   string a,b;cin>>a>>b;
   vector<int> pa,pb;
   for(int i=0;i<n;i++){
     if(a[i]=='1') pa.push_back(i);

     if(b[i]=='1') pb.push_back(i);
   } 
   if(pa.size()!=pb.size()){
    cout<<-1;
    return ;
   }
   int cnt=0;
   for(int i=0;i<pa.size();i++){
    if(pa[i]!=pb[i]) cnt++;

   }
   cout<<cnt;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
  

    return 0;
}