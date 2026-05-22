#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int l,r; cin>>l>>r;
    if(2*l<=r){
        cout<<l<<" "<<2*l;
    }
    else{
        cout<<"-1 -1";
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