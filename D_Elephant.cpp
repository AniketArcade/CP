#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x;
    cin >> x;
    (x%5==0) ? cout << x/5 : cout << x/5 + 1;
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