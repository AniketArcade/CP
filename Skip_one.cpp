#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    vector<int> p(n+1);
    p[0]=0;
    vector<int> mx(n+1);
    mx[0]=0;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        p[i] =a[i]+p[i-1];
        mx[i]=max(mx[i-1],a[i]);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if((p[i]-mx[i])<=k){
            ans =max(ans,i);
        }
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