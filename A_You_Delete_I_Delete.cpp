#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;cin>>s;
     auto it0= find(s.begin(),s.end(),'0');
     s.erase(it0);

    auto it1=find(s.begin(),s.end(),'1');
    s.erase(it1);
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