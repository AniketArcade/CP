#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a,b,c;cin>>a>>b>>c;
    if(a<b){
        int ans=b-a;
        ans=max(ans,abs(a+c-b));
        cout<<ans;
    }
    else {
        cout<<a+c-b;
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