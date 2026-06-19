#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,c;
vector<int> s;
int check(int mid){
    int summ=0;
    for(int i=0;i<n;i++){
        summ += ((s[i]+2*mid)*((s[i]+2*mid)));
        if(summ>=c) return 1;
    }
    return 0;

}
void solve()
{
   cin>>n>>c;
   s.resize(n);
   for(int i=0;i<n;i++) cin>>s[i];
   int lo=1;int hi=1e9;
   int ans=hi;
   while(lo<=hi){
    int mid=lo +(hi-lo)/2;
    if(check(mid)){
      ans=mid;
      hi=mid-1;
    }
    else {
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