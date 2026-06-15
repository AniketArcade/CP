#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int j=1;j<=n;j++)
    {
     map<int,int> mp;
     int tar=x;tar -=a[j];
     for(int i=1;i<=n;i++){
        if(i==j) continue;
        else{
            auto it=mp.find(tar-a[i]);
            if(it!=mp.end()){
                cout<<i<<" "<<j<<" "<<it->second;
                return ;
            }
            else {
                mp[a[i]]=i;
            }
        }
    }
    }
    cout<<"IMPOSSIBLE";
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