#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int> a;
int check(int mid)
{
    for(int i=0;i<n;i++)
    {
        int cost=0;
        bool ok=false;  
        for(int j=i;j<n;j++){
            int need=mid-(j-i);
            if(a[j]>=need) {ok=true;break;}
            cost+=need-a[j];
            if(cost>k) break;
        }
        if(ok && cost<=k) return 1;
    }
    return 0;
}
void solve()
{
    cin>>n>>k;
    a.resize(n);
    int ma=0;
    for(int i=0;i<n;i++) {  
        cin>>a[i];
        ma=max(ma,a[i]);
    }
    int lo=0,hi=ma+k;
    int ans=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(check(mid)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
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