#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<pair<int,int>> a(n+1);
    for(int i=1;i<=n;i++) {
        int ai;cin>>ai;
        a[i]={ai,i};
    }
    sort(a.begin(),a.end());
    
    for(int j=1;j<=n;j++)
    {
     int l=j+1,r=n;
      while(l<r)
     {
        int sum=a[l].first+a[r].first+a[j].first;
       if(sum>x) {
        r--;
       }
       else if(sum<x){
        l++;
       }
       else {
        cout<<a[j].second<<" "<<a[l].second<<" "<<a[r].second;
        return ;
       }
     }
    }
    cout<<"IMPOSSIBLE";
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