#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    int distinct=0;
    int tail=0,head=-1;
    map<int,int> mp;
    while(tail<n){
        while(head+1<n && ((mp[a[head+1]]>=1 && distinct<=k) || (mp[a[head+1]]==0 && (distinct+1<=k)))){
              mp[a[head+1]]++;
              if(mp[a[head+1]]==1) distinct++;
              head++;
        }
        ans += head-tail+1;
        mp[a[tail]]--;
        if(mp[a[tail]]==0) distinct--;
        
        if(tail<=head){
            tail++;
        }
        else {
            tail++;
            head=tail-1;
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