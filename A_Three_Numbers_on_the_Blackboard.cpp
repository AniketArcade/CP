#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v={a,b,c};
    sort(v.begin(),v.end());

    a=v[0];
    b=v[1];
    c=v[2];
    if(a+b < c)
        c = a+b;
    cout << c-a;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}