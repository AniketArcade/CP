#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n , k ; cin>>n>>k;
    vector<int> a;
    int mn=LLONG_MAX;
    for(int i=0;i<n;i++) {
        int x;cin>>x;a.push_back(x);
        mn=min(mn,x);
    }
    if(k>=3) { cout << 0 ; return; }
    sort(a.begin(),a.end());
    
    vector<int> b;
    int ans=mn;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mn=min(mn,abs(a[i]-a[j]));
            b.push_back(abs(a[i]-a[j]));
        }
    }
    if(k==1) {cout<<mn; return ; }

    for(auto v:b){
        ans=min(ans,v);
        ans = min(ans, v);
        auto it = lower_bound(a.begin(), a.end(), v);
        if(it!=a.end()){
            ans=min(ans,abs(*it - v));
        }
        if(it!=a.begin()){
        --it;
        ans=min(ans, abs(*it - v));
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