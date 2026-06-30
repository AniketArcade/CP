#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   vector<int> a(n),b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];


    int pref = 0;
    for (int i=0; i<n;i++) {
        pref += b[i] - a[i];
        if (pref<0) {
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}