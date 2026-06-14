#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,t;
vector<int> k;
int check(int mid)
{
 int p=t;
 for(int i=0;i<n;i++){
    p-=mid/k[i];
    if(p<=0) return 1;
 }
 return 0;
}
void solve()
{
    cin>>n>>t;
    k.resize(n);
    for(int i=0;i<n;i++){
     cin>>k[i];
    }
    int lo=0;int hi=1e18;
    int ans;
    while(lo<=hi)
    {
     int mid=lo +(hi-lo)/2;
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
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();

    return 0;
}