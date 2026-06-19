#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n,k,a,b;cin>>n>>k>>a>>b;
   vector<pair<int,int>> po(n+1);
   for(int i=1;i<=n;i++){
    int x,y;cin>>x>>y;
    po[i]={x,y};
   }  
   int ans=1e18;
   if(a>k && b>k)
   {
    int da=1e18;
    int db=1e18;
    for(int i=1;i<=k;i++)
    {
     int dda=abs(po[a].first-po[i].first)+abs(po[a].second-po[i].second);
     int ddb=abs(po[b].first-po[i].first)+abs(po[b].second-po[i].second);
     da=min(da,dda);
     db=min(db,ddb);
    }
    int temp=abs(po[a].first-po[b].first)+abs(po[a].second-po[b].second);
    ans=min(da+db,temp);
   }
   else if(a<=k && b>k){
    int db=1e18;
    for(int i=1;i<=k;i++)
    {
     int ddb=abs(po[b].first-po[i].first)+abs(po[b].second-po[i].second);
     db=min(db,ddb);
    }
    ans=min(ans,db);    
   }
   else if(a>k && b<=k)
   {
    int db=1e18;
    for(int i=1;i<=k;i++)
    {
     int ddb=abs(po[a].first-po[i].first)+abs(po[a].second-po[i].second);
     db=min(db,ddb);
    }
    ans=min(ans,db);
   }
   else ans=0;

   cout<<ans;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}