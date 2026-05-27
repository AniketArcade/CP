#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if(x>a) cout<<"Alice";
    else if(x<a) cout<<"Bob";
    else if(x==a){
        if(y>b) cout<<"Alice";
        else if(y<b) cout<<"Bob";
        else cout<<"Alice";
    }
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