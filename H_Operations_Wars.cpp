#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ansmax=0,ansmin=0;

    ansmax=max(ansmax,max(a[0]*b[0],a[0]+b[0]));
    ansmax=max(ansmax,max(a[n-1]*b[n-1],a[n-1]+b[n-1]));
    ansmax=max(ansmax,max((b[n-1]-a[0]),(a[n-1]-b[0])));
    
    ansmin=min(a[n-1]*b[0],a[0]*b[n-1]);

    ansmin=min(ansmin,min((min( (a[0]-b[n-1]) , (b[n-1]-a[0]))),min( (a[n-1]-b[0]) ,(b[0]-a[n-1]))));
    ansmin=min(ansmin,a[0]+b[0]);
    
    double ans1 = (double)ansmin*1.0;
    double ans2 = (double)ansmax*1.0;

    cout<<fixed<<setprecision(10)<<ans1<<" "<<ans2<<"\n";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();

    return 0;
}