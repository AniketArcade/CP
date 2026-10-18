#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;string s;cin>>s;
    n=s.length();
    int ans=1;
    for(int i=0;i<n-2;i++){
        string temp;
        temp +=s[i];temp +=s[i+1];temp +=s[i+2];
        if(temp=="000"|| temp=="111") {ans++;break;}
        
    }
    for(int i=0;i<n-2;i++){
        string temp;
        temp +=s[i];temp +=s[i+1];temp +=s[i+2];
        if(temp=="101"|| temp=="010") {ans++;break;}
        
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