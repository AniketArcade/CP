#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n);
    int mx=-1e9;int mn=1e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if(k%2){
        for(int i=0;i<n;i++){
            cout<<mx-a[i]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<a[i]-mn<<" ";
        }
    }

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   
    return 0;
}