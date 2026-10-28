#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,x;
vector<int> a;
int check(int k){
    int used=0;
    for(int i=0;i<n;i++){
        int d=1e9;
        if(i>0) d=min(d,a[i]-a[i-1]);
        if(i<n-1) d=min(d,a[i+1]-a[i]);
        if(d<=k) continue;       
        used++;
        if(used>x) return 0;
        if(i+1<n){
            int d2=1e9;
            d2=min(d2,a[i+1]-a[i]);
            if(i+2<n) d2=min(d2,a[i+2]-a[i+1]);
            if(d2>k && a[i+1]-a[i]<=2*k) i++;
        }
    }
    return 1;
}
void solve()
{
    cin>>n>>x;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int lo=1,hi=1e9;
    int ans;
    while(lo<=hi){
        int mid= lo +(hi-lo)/2;

        if(check(mid)){
            hi=mid-1;
            ans=mid;
        }
        else{
            lo=mid+1;
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