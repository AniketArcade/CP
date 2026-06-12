#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)    {
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    int ans=0;
    int last_end=0;
    for(auto x:v)    {
        if(x.second>=last_end)        {
            ans++;
            last_end=x.first;
        }
    }    cout<<ans;

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