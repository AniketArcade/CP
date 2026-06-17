#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x,y;
	cin>>x>>y;
	
	if(abs(x-y)<=2) cout<<"Interesting";
	else cout<<"Boring";
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