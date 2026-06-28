#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n,k;cin>>n>>k; 
   int a[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }
   int need=0;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
       if(a[i][j]!=a[n-i-1][n-j-1]) need++;
    }
   }
   need/=2;
   if(need>k) {
    cout<<"NO";
    return;
   }
   if(n%2)
   {
        cout<<"YES";
   }
   else 
    {
        need -=k;
        if(need%2) {
        cout<<"NO";
        }
        else {
        cout<<"YES";}
   }
   
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)   {solve();if(t>0)cout<<"\n";}


    return 0;
}