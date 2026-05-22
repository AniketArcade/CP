#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF LLONG_MAX
void solve()
{
   int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    int  x=INF,y=INF;
    for(int i=0;i<n;i++){
        if(x>y) swap(x,y);
        if(a[i]<x ){
            x=a[i];
        }
        else if(a[i]==x){
            x=a[i];
        }
        else if(a[i]>x && a[i]<y){
            y=a[i];
            ans++;
        }
        else if(a[i]==y){
            y=a[i];
        }
        else {
            ans++;
            x=a[i];
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