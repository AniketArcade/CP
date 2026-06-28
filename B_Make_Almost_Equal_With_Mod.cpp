#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int allodd=1;
    int alleven=1;
    for(int i=0;i<n;i++){
        if(a[i]%2) alleven=0;
        else allodd=0;
    }
    if(alleven==1 || allodd==1) {
        cout<<4;
    }
    else cout<<2;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}