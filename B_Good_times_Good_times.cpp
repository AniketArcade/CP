#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string x;cin>>x;
    int n=x.size();
    int y=1;
    for(int i=0;i<n;i++) y *=10;
    y +=1;
    cout<<y;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}