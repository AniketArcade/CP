#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;int cnt=0;
    for(auto c:s){
        if(c=='#'){
            cnt++;
        }
        else{
            ans=max(ans,(cnt+1)/2);
            cnt=0;
        }
    }
    ans=max(ans,(cnt+1)/2);
    cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}