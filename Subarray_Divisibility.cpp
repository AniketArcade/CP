#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;
    vector<int> a(n+1);
    int p[n+1];p[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        p[i]=a[i]+p[i-1];
    }
    for(int i=0;i<=n;i++) p[i]=(p[i]%n+n)%n;
    int ans=0;
    map<int,int> mp;
    
    for(int i=0;i<=n;i++){
        if(mp.count(p[i])){
            ans +=mp[p[i]];
            mp[p[i]]++;
        }
        else {
            mp[p[i]]++;
        }
    }
    cout<<ans;


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