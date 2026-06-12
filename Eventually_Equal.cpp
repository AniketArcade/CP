#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
void solve()
{
 int a,b,c;cin>>a>>b>>c;
  int moves=1;
  while(true){
      if(gcd(a,c) == 1 && gcd(b,c)==1){
          break;
      }
      else {
          c++;
          moves++;
      }
  }
  if(a==b) cout<<0;
  else cout<<moves;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
    int t;cin>>t;while(t--)
    {solve();if(t>0)cout<<"\n";}
    return 0;
}