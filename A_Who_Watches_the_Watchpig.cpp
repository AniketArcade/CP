#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        if (2 * k > n) {
            cout<<-1;
            return;
        }

        int ans=0;

        for (int i = 0; i < k; i++)
            if(s[i]=='L')ans++;

        for (int i = n - k; i < n; i++)
            {if(s[i]=='R')ans++;}

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