#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int> a(n+1);
    int cnt1[n+1];
    int cnt3[n+1];
    int k[n+1];
    cnt1[0]=0;cnt3[0]=0;
    for(int i = 1; i <= n; i++){
     cin>>a[i];
     cnt1[i] = cnt1[i-1]+(a[i]==1);
     cnt3[i] = cnt3[i-1]+(a[i]==3);
     k[i]=i-cnt3[i]*2;
    }
    int suffix[n+1];
    suffix[n-1]=k[n-1];
    for(int i = n-2; i >= 0; i--){
        suffix[i] = max(suffix[i+1], k[i]);
    }
    bool ok = false;
    for(int i=1;i<=n-2;i++){
        int g=2*cnt1[i]-i;
        if(g>=0 && suffix[i+1]>=suffix[i]){
            ok = true;
            break;
        }
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}