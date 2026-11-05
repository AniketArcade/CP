#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
        int x,y,z;cin>>x>>y>>z;
        int n=x+y+z;
        char c;
        if(y>=z) c='R';
        else if(z>=x) c='S';
        else c='P';

        string s(n,c);
        cout<<s;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}