#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
 int n;cin>>n;
 vector<int> a(n);
 map<int,int>mp;
 bool ispossible=false;
 for(int i=0;i<n;i++){
    cin>>a[i];
    if(mp[a[i]]>0){
        ispossible=true;
    }
    mp[a[i]]++;
 }
 if(!ispossible){
    cout<<-1;
    return;
 }
 int ans=1e9;
 for(int i=0;i<n;i++)
 {
   for(int j=i+1;j<n;j++)
   {
    if(a[i]==a[j])
    {
      ans=min(ans,n+i-j-1);
    }
   }
 }
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