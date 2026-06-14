#include <bits/stdc++.h>
using namespace std;
#define int long long
int x;
map<pair<int,int>,int>mp;

int rec(int a,int b)
{
 if(a<b) swap(a,b);
 if(a==b) return 0;
 int ans=a-b;
 a /=x;
  if(a<b) swap(a,b);
 ans=min(ans,1+rec(a,b));
 return ans;
}
void solve()
{
    int a,b;
    cin>>a>>b>>x;
    if(a<b) swap(a,b);
    // int opr=0;
    // int ans=a-b;
    // while(a!=b)
    // {
    //   while()
    // }
    cout<<rec(a,b);

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   

    return 0;
}