#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
vector<int> a;
int check(int mid)
{
    int cnt=1;
    int cursum=0;
    for(int i=0;i<n;i++){
        cursum +=a[i];
        if(cursum>mid){
            cursum=a[i];
            cnt++;
        }
    }
    if(cnt<=k) return 1;
    else return 0;

}
void solve()
{
   cin>>n>>k;
   a.resize(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   int lo=*max_element(a.begin(),a.end()),hi=accumulate(a.begin(),a.end(),0ll);
   int ans;
   while(lo<=hi)
   {
    int mid =lo+(hi-lo)/2;

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