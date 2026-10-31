#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;cin>>n>>m;
    string p,q;cin>>p>>q;
    map<char,int> mp;
    for(auto v:p){
        mp[v]++;
    }
    for(auto v:q){
        mp[v]--;
    }
    int ans=1;
    string s;
    for(auto [c,cnt]:mp){
        if(cnt>0){
            for(int i=0; i<cnt; i++){
        s+=c;
    }}
        else if(cnt<0) {
            cout<<"NO";
            return;
        }
    }
    if(s=="six"){
        cout<<"YES";
    }
    else if(s=="xsi"){cout<<"YES";}
    else if(s=="sxi"){cout<<"YES";}
    else if(s=="xis"){cout<<"YES";}
    else if(s=="ixs"){cout<<"YES";}
    else if(s=="isx"){cout<<"YES";}
    else cout<<"NO";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}