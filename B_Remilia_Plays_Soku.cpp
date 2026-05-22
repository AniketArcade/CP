#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,x1,x2,k;cin>>n>>x1>>x2>>k;
    int d=min(abs(x1-x2),n-abs(x1-x2));
   if(n==2) cout<<1<<"\n";
   else cout<<min(d+k,n/2)<<"\n";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();}
   

    return 0;
}
