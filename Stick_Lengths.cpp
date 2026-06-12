#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int ans=0;
    if(n%2){
           int mid=(n)/2;
           for(int i=0;i<n;i++){
               ans +=abs(a[i]-a[mid]);
           }
    }
    else{
        int mid1=n/2,mid2=n/2+1;
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
            ans1 +=abs(a[i]-a[mid1]);
            ans2 +=abs(a[i]-a[mid2]);
        }
        ans=min(ans1,ans2);

    }
    cout<<ans;
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