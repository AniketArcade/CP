#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int st[2000005],en[2000005];
int check(int mid){
    int lo=0,hi=0;
    for(int i=1;i<=n;i++)
    {
        lo=max(lo-mid,st[i]);
        hi=min(hi+mid,en[i]);
        if(lo>hi)return 0;

    }
    return 1;
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>st[i]>>en[i];
    }
    int ans;
    int lo =0,hi = 1e9;
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(check(mid)){
            ans=mid;
            hi=mid-1;
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