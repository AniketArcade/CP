#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int a,b,c;cin>>a>>b>>c;
   int cnt=0;
   while(true){
        if(a==b || b==c || a==c){
            cout<<cnt;
            return;
        }
        set<int> s;
        s.insert(a);s.insert(b);s.insert(c);
        auto it=s.begin();
        a=*it;it++;b=*it;it++;c=*it;
        a++;c--;
        cnt++;
   } 
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}