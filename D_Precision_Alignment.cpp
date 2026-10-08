#include <bits/stdc++.h>
using namespace std;
#define int long long
  int n,k;
  vector<int> s;
  vector<int> c;

bool check(int mid){
    int cnt=0;


    for(int i=0;i<n;i++){
        if(s[i]>=mid) continue;
        if(c[i]==-2) return false;
        cnt +=( mid-s[i] + (c[i]>0 ? 2*c[i]:0) );
        if(cnt>k) return false;
    }
    return true;

}


void solve()
{
  cin>>n>>k;
  s.assign(n,0);c.assign(n,0);
  int lo=LLONG_MAX,hi=2000000000000000000LL;
  for(int i=0;i<n;i++){
    int x,y,z;cin>>x>>y>>z;
     s[i]=x+y+z;
     lo=min(lo,s[i]);
    if(x>y || y>z || x>z ) c[i]=-1;
    else if(x==y && y==z) c[i]=-2;
    else {
        c[i]=min(z-y+1,y-x+1);
    }
  }
  int ans=lo;
  while(1+lo<hi){
    int mid=lo+(hi-lo)/2;
    if(check(mid)){
        lo=mid;
        ans=lo;
    }
    else {
        hi=mid;
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