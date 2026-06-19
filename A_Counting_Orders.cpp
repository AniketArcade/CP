#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD =1e9+7;
void solve()
{
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
         for(int i=0;i<n;i++) cin>>b[i];
         sort(a.begin(),a.end());
         sort(b.rbegin(),b.rend());
         int res=1;
         for(int i=0;i<n;i++){
            int cnt=n-(upper_bound(a.begin(),a.end(),b[i])-a.begin());
             
            if(cnt-i>=0) {
                res *= (cnt-i);
                res %=MOD;
            }else res=0;
         }
         cout<<res;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}