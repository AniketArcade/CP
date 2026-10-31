#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int x, y, z;
    cin>>x>>y>>z;
    string ans;
    int p=min(x,(x+y+z)/3);
    for (int i=0;i<p;i++)ans+= 'P';
    int r=min(y,(x+y+z)/3);
    for(int i=0;i<r;i++) ans+='R';
    int s=min(z,(x+y+z)/3);
    for(int i=0;i<s;i++) ans+= 'S';
    while(ans.size()<x+y+z){
        ans += 'R';
    }
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