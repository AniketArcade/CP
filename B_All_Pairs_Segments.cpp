#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
  int n,q;cin>>n>>q;
  vector<int> x(n+1); for(int i = 1 ;i <=n;i++) cin >> x[i];
  vector<int> a(n+1);
  if(n==2){
    map<int,int>mp;
    mp[1] =x[2]-x[1]+1;
    while(q--){
        int k;cin>>k;
        cout<<mp[k]<<" ";
    }
    return ;
  }
   map<int,int> mp;

  for(int i=1;i<n;i++){
    mp[i*(n-i)] += (x[i+1]-x[i]-1);
    mp[i*(n-i+1)-1]++;
  }
  mp[n*(n-n+1)-1] +=1;
 
  for (auto v:a){mp[v]++; }
  while(q--){
    int k;cin>>k;
    cout<<mp[k]<<" ";
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