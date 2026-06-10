#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
 int n;cin>>n;
 vector<int> a(n);
 vector<int> b(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
 }
 sort(a.begin(),a.end());
 int ans[n];
 for(int i=0;i<n;i++){
    int cnt =upper_bound(a.begin(),a.end(),b[i])-a.begin();
    cout<<b[i]<<"-"<<cnt<<"  ";
    // ans[i]  =cnt-1;
 }   
 cout<<endl;
//  for(int i=0;i<n;i++) cout<<ans[i]<< " ";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   return 0;
}