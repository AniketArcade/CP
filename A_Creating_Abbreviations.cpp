#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,m;
   cin>>n>>m;
    vector<int> ch(27,0);
    for(int i=0;i<n;i++){
        string s;cin>>s;
        ch[s[0]-'a']=1;
    }
    bool ans=true;
    for(int i=0;i<m;i++){
        string s;cin>>s;
        for(auto v:s){
            if(ch[v-'A']==0){
                ans=false;
            }
        }
    }
    if(ans) cout<<"YES";
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