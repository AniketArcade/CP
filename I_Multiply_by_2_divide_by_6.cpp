#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n;cin>>n;
   int a=0,b=0;
   while(n%2==0){
    a++;
    n/=2;
   }
   while(n%3==0){
    b++;
    n/=3;
   }
   if(n!=1 || a>b) {
    cout<<-1;
    return;
   }
   else cout<<2*b -a;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}