#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,c;cin>>n>>c;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];
   
    int s=accumulate(a.begin(),a.end(),0ll)-accumulate(b.begin(),b.end(),0ll);
      
    bool ok=true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            ok=false;break;
        }
    }
      if(ok) {
        cout<<s;
        return ;
      }

    sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     bool k=true;
     for(int i=0;i<n;i++){
        if(a[i]<b[i]) {
            k=false;
            break;
        }
     }
       if(k){
        cout<<s+c;
       }
      else cout<<-1;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}