#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
    int cnt=0;
    for(int k=1;k<=n;k++)
    {
        if(n%k==0){
            int g=0;
            for(int i=0;i<n-k;i++){
                g= gcd(g,abs(a[i+k]-a[i]));
            }
            if(g!=1) cnt++;
        }
    }
    cout<<cnt;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}