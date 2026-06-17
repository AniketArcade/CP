#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  int s=0;
  for(int i=0;i<n;i++){
      cin>>a[i];
      s +=a[i];
  }
  int t=2*k-s;
  sort(a.begin(),a.end());
  int i=0,j=n-1;
  int cnt=0;
  while(i<j){
      if(a[i]+a[j]<=t){
          cnt += (j-i);
          i++;
      }
      else j--;
  }
  cout<< (n*(n-1)/2)-cnt;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
    int t;cin>>t;while(t--)
    {solve();if(t>0)cout<<"\n";}
    return 0;
}