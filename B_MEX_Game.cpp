#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];

    map<int,int> mp;
    for(int i=0;i<n;i++) mp[a[i]]++;

    int ans=0;
    
    int p = 0;
    while (mp[p] >= 2*k) p++;
    ans = (mp[p] == 2*k - 1);

    if(ans) cout<<"YES";
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