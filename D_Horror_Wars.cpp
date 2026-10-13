#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
int binpow(int x,int n){
    int res=1;
    while(n>0){
        if(n&1) {
            res=(res*x)%MOD;
        }
        x=(x*x)%MOD;
        n/=2;
    }
    return res;
}

void solve()
{
    int n;cin>>n;
    int ans=(n*(n+1)%MOD*(binpow(7,MOD-2)))%MOD;
    cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}