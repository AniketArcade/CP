#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int d1=0,d0=0;
    for(int i=1;i<=n;i++){
         if(i%2){
            d1=gcd(d1,a[i]);
         }
         else{
            d0=gcd(d0,a[i]);
         }

    }
    int ans=0;
    int pos1=1;
    int pos2=1;
    for(int i=1;i<=n;i++)
    {
     if(i%2){
          if(a[i]%d0==0) pos1=0;
     }
     else{
         if(a[i]%d1==0) pos2=0;
     }
    }
    if(pos1==1){
        cout<<d0;
        return;
    }
    else if(pos2==1){
        cout<<d1;
        return;
    }
    else cout<<0;

    

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
 

    return 0;
}