#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int bit[21][n];
    vector<int> cntbit(21,0);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<21;j++){
          if((a[i]>>j)&1){
            cntbit[j]++;
          }
      }
    }
   for(int j=0;j<21;j++)
   {
       for(int i=0;i<n;i++)
       {
          if(cntbit[j]>0)
          {
              bit[j][i]=1;
              cntbit[j]--;
          }
          else
          {
              bit[j][i]=0;
          }
       }
   }
   int ans=0;
    for(int i=0;i<n;i++)
    {
        int val=0;
        for(int j=0;j<21;j++)
        {
            if(bit[j][i])val+=(1<<j);
        }
        ans+=val*val;
    }
    cout<<ans<<"\n";
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