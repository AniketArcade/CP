#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    bool find=false;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        if(mp[x-a[i]]){
            find=true;
            cout<<mp[x-a[i]]<<" "<<i;
            break;  
        }
        mp[a[i]]=i;
    }
    if(!find)cout<<"IMPOSSIBLE";
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