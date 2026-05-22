#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int a, b;
    cin >> a >> b;
    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
    years++;
    }
    cout<< years;
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
