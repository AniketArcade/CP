#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n+1); for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> arr(n+1,1);

    vector<pair<int,int>> p;
    for(int i=1;i<=n;i++){
        p.push_back({i*a[i],1});
        p.push_back({i*(a[i]+1)-1,-1});
    }
    sort(p.begin(),p.end());
    int cnt=0;
    for(int i=0;i<2*n;i++)
    {
       
      int v=p[i].first; int s=p[i].second;
       if(v>=n) break;
      if(s==1){
        cnt ++;
        arr[v]=0;
      }
      else {
         arr[v]=0;
         cnt--;
      }
      if(cnt>0 && i!=2*n-1){
        for(int j=v+1;j<min(p[i+1].first,n);j++){
            arr[j]=0;
        }
      }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]) ans++;
    }
    cout<<ans<<"\n";
    for(int i=0;i<n;i++){
        if(arr[i])cout<<i<<" ";
    }

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}