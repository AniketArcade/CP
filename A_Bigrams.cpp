#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int k;cin>>k;
    int c[k];
    for(int i=0;i<k;i++)
    {
      cin>>c[i];
    }
    int cnt=0;
    int cntval;
    for(int i=0;i<k;i++)
    {
      if(c[i]>=2)
      {
        cnt++;
        cntval=c[i];
      }
    }
    if(cnt>=2) cout<<"YES";
    else if(cnt==1)
    {
      if(cntval>=3) cout<<"YES";
      else cout<<"NO";
    }
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