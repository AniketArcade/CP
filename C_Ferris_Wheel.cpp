#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int ans=0;
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            ans++;
            i++;
            j--;
        }
        else if (i==j){
            ans++;
            j--;
            i++;
        }
        else {
            ans++;
            j--;
        }
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