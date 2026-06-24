#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{ 
 int n,k;cin>>n>>k;
 vector<int> a(n);for(int i=0;i<n;i++) cin>>a[i];
 map<int,int> mp;
 for(int i=0;i<n;i++){
    if(mp[a[i]-k]){
        cout<<"YES";
        return;
    }
    else if(mp[a[i]+k]){
        cout<<"YES";
        return ;
    }
    else {
        mp[a[i]]++;
    }
 }
 cout<<"NO";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}