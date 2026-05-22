#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l=n/2-1;
    int r=l+1;
    bool ispossible=true;
    int vall=a[l],valr=a[r];
    l--; r++;
    while(l>=0 && r<n)
    {
       if(vall-a[l]!=a[r]-valr)
       {
           ispossible=false;
           break;
       }
       l--;r++; 
    }
    if(ispossible) cout<<"Yes";
    else cout<<"No";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
  
    return 0;
}