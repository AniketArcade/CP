#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;int k;cin>>n>>k;
    vector<int> a(n+1);
    vector<int> pref(n+1);
    pref[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    int ans=0;
    vector<int> cnt(k, 0);
    int i=0;
    for(int j=k+1;j<=n;j++){
        while(i<j-k){
                cnt[pref[i] % k]++;             
                i++;
            }
        ans += cnt[pref[j] % k];
        }
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