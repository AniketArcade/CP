#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<int> love(n-3);
    int extra=0;
    map<int,int> mp;
    for(int i=1;i<=n-4;i++)
    {
     love[i]= (a[i]+a[i+2]-a[i+4]);
     mp[love[i]]++;
    }
    for(int i=1;i<=n-4;i++)
    {
     int pos=i+2;
     if(i+2<=n-4) {
        if(love[i]==love[pos]) extra++;
     }
     pos=i+4;
     if(pos<=n-4){
         if(love[i]==love[pos]) extra++;
     }
    }
    int ans=0;ans -=extra;
    for(auto v:mp){
        int l=v.second;
        ans += (l*(l-1))/2;
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