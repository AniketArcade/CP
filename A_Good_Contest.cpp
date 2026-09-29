#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(3);
    for(int i=0;i<3;i++)cin>>a[i];
    int m=INT_MAX;
    for(int i=0;i<3;i++)
    {
        m=min(m,a[i]);}
        cout<<n-m;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}