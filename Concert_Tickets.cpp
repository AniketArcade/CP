#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> b(m);
    multiset<int> a;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        a.insert(x);
    }
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<m;i++) 
    {
        auto it=a.upper_bound(b[i]);
        if(it==a.begin()){
            cout<<-1<<"\n";
        }
        else {
            it--;
            cout<<*it<<"\n";
            a.erase(it);
        }
    }
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