#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;

    vector<pair<pair<int,int>,int>> v;
    int ans[n+1];
    for(int i=1;i<=n;i++){
        int a,b;cin>>a>>b;
        v.push_back({{a,1},i});
        v.push_back({{b,2},i});
    }
    sort(v.begin(),v.end());
    int cnt=1;
    set<int> s;
    for(auto x:v)
    {

     int bon=x.first.first;
     int whi=x.first.second;
     int win=x.second;
     if(whi==1){
        if(!s.empty()){
            auto it=s.begin();
            ans[win]=*it;
            s.erase(it);
        }
        else {
            ans[win]=cnt;
            cnt++;
        }
     }
     else {
        s.insert(ans[win]);
     }

    }

    cout<<cnt-1<<"\n";
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";

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