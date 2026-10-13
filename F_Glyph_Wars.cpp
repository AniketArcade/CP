#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;

    // if(n==1){

    //     cout<<0;
    //     return ;
    // }
    set<char> st;
    for(auto v:s) st.insert(v);
    int ans=LLONG_MAX;
    for(auto x:st)
    {
        for(auto y:st)
        {
            string temp=s;
            for(int i=0;i<n;i++){
                if(temp[i]==x) temp[i]=y;
            }

            int cnt=0;
            for(int i=0;i<n-1;i++){


            if(temp[i]!=temp[i+1]) cnt++;
            }
            ans=min(ans,cnt);

        }
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