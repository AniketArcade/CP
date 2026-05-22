#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v;
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt++;
        }
        else
        {
            if(cnt>0)
            {
                v.push_back(cnt);
                cnt=0;
            }
        }
    }
    if(cnt>0)  v.push_back(cnt); 
    sort(v.rbegin(),v.rend());
    
    int ans=0;
    for(int i=0;i<v.size();i+=2){
        ans += v[i];
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