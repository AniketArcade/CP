#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    for (int i=1 ;i<= n;i++){
            cout << 2 * i - 1 << " ";
        }
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
 
    return 0;
}