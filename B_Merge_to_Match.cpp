#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    if(n<2*m){cout<<"NO";return;}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool ans=true;
    for (int j=0;j<m;j++){
        if(!(a[j] < b[j] && a[n - m + j] > b[j])) {
            ans = false;
            break;
        }
    }
    if(ans)cout<<"YES";
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