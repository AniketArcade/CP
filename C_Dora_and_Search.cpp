#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n+1);
    set<int> s;
    for(int i=1;i<=n;i++) {cin>>a[i];s.insert(a[i]);}
    
    int l=1,r=n;
    while(l<=r)
    {
        int mn=*s.begin();
        auto it=s.end();
        it--;
        int mx=*it;
     if(mn==a[l]){
        s.erase(mn);
        l++;
     }
     else if(mx==a[l]){
        s.erase(mx);
        l++;
     }
     else if(mn==a[r]){
          s.erase(mn);
          r--;
     }
     else if(mx==a[r]){
        s.erase(mx);
        r--;
     }
     else {
        cout<<l<<" "<<r;
        return ;
     }
    }
    cout<<-1;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}