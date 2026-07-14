#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int c=0;
    int need=1;
    bool ok=true;
    for(int i=0;i<=n-2;i++){
      int av=a[i]+c;
      if(av<need){
        ok=false;
        break;
      }
      c = av-need;
      need++;
    }
    if(ok){
        int av=a[n-1]+c;
        if(av<need){
            ok=false;
        }
    }
    cout<<(ok?"YES":"NO");
}

signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}