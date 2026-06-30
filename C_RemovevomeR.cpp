#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
string s;

void solve()
{
    cin>>n;cin>>s;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) cnt ++;
    }
    if(cnt==2) cout<<2;
    else cout<<1;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}