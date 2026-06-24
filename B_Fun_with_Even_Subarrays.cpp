#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n); for(int i=0;i<n;i++) cin>>a[i];
    reverse(a.begin(),a.end());
    int l=0;
    int cnt=0;
    while(1)
    {
     int prev=l;
     while(l+1<n && a[prev]==a[l+1]) l++;
     if(l==n-1) break;
     cnt++;
     int maxlen=l+1;
     while(maxlen>0 && l<n){
        l++;
        a[l]=a[prev];
        if(l==n-1) break;
        maxlen--;
     }

    }

    cout<<cnt;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}